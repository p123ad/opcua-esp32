#include "open62541.h"

/* GPIO Numbers */
#define BLINK_GPIO 5
#define BUTTON_GPIO 4


/* Led Method */
UA_StatusCode
ledProcessCallBack(UA_Server *server,
                   const UA_NodeId *sessionId, void *sessionHandle,
                   const UA_NodeId *methodId, void *methodContext,
                   const UA_NodeId *objectId, void *objectContext,
                   size_t inputSize, const UA_Variant *input,
                   size_t outputSize, UA_Variant *output);

void addLEDMethod(UA_Server *server);


/* Button */
UA_StatusCode
readButtonState(UA_Server *server,
                const UA_NodeId *sessionId, void *sessionContext,
                const UA_NodeId *nodeId, void *nodeContext,
                UA_Boolean sourceTimeStamp, const UA_NumericRange *range,
                UA_DataValue *dataValue);

void
addButtonControlNode(UA_Server *server);

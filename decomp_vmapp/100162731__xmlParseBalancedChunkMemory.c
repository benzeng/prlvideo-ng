
int _xmlParseBalancedChunkMemory
              (xmlDocPtr doc,xmlSAXHandlerPtr sax,void *user_data,int depth,xmlChar *string,
              xmlNodePtr *lst)

{
  int iVar1;
  
  iVar1 = _xmlParseBalancedChunkMemoryRecover(doc,sax,user_data,depth,string,lst,0);
  return iVar1;
}



void FUN_10024ed37(long param_1,xmlAttrPtr param_2)

{
  int len;
  _xmlNode *local_10;
  
  for (local_10 = param_2->children; local_10 != (_xmlNode *)0x0; local_10 = local_10->next) {
    if (local_10->type == XML_TEXT_NODE) {
      _xmlAttrSerializeTxtContent
                (*(xmlBufferPtr *)(param_1 + 0x20),param_2->doc,param_2,local_10->content);
    }
    else if (local_10->type == XML_ENTITY_REF_NODE) {
      _xmlBufferAdd(*(xmlBufferPtr *)(param_1 + 0x20),(xmlChar *)"&",1);
      len = _xmlStrlen(local_10->name);
      _xmlBufferAdd(*(xmlBufferPtr *)(param_1 + 0x20),local_10->name,len);
      _xmlBufferAdd(*(xmlBufferPtr *)(param_1 + 0x20),(xmlChar *)";",1);
    }
  }
  return;
}


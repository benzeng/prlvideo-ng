
void FUN_100186c87(xmlBufferPtr param_1,long *param_2)

{
  if ((param_1 != (xmlBufferPtr)0x0) && (param_2 != (long *)0x0)) {
    _xmlBufferWriteCHAR(param_1,(xmlChar *)param_2[1]);
    if (*param_2 == 0) {
      _xmlBufferWriteChar(param_1,")");
    }
    else {
      _xmlBufferWriteChar(param_1," | ");
      FUN_100186c87(param_1,*param_2);
    }
  }
  return;
}


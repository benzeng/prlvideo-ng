
void FUN_10024f155(long param_1,long param_2)

{
  xmlOutputBufferPtr out;
  
  if ((param_2 != 0) &&
     (out = *(xmlOutputBufferPtr *)(param_1 + 0x28), out != (xmlOutputBufferPtr)0x0)) {
    _xmlOutputBufferWrite(out,1," ");
    if ((*(long *)(param_2 + 0x48) != 0) && (*(long *)(*(long *)(param_2 + 0x48) + 0x18) != 0)) {
      _xmlOutputBufferWriteString(out,*(char **)(*(long *)(param_2 + 0x48) + 0x18));
      _xmlOutputBufferWrite(out,1,":");
    }
    _xmlOutputBufferWriteString(out,*(char **)(param_2 + 0x10));
    _xmlOutputBufferWrite(out,2,"=\"");
    FUN_10024ed37(out,param_2);
    _xmlOutputBufferWrite(out,1,"\"");
  }
  return;
}


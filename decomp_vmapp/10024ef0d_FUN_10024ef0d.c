
void FUN_10024ef0d(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  xmlOutputBufferPtr out;
  undefined8 uVar3;
  
  if (((param_2 != 0) && (param_1 != 0)) && (*(long *)(param_1 + 0x28) != 0)) {
    out = *(xmlOutputBufferPtr *)(param_1 + 0x28);
    _xmlOutputBufferWrite(out,10,"<!DOCTYPE ");
    _xmlOutputBufferWriteString(out,*(char **)(param_2 + 0x10));
    if (*(long *)(param_2 + 0x68) == 0) {
      if (*(long *)(param_2 + 0x70) != 0) {
        _xmlOutputBufferWrite(out,8," SYSTEM ");
        _xmlBufferWriteQuotedString((xmlBufferPtr)out->buffer,*(xmlChar **)(param_2 + 0x70));
      }
    }
    else {
      _xmlOutputBufferWrite(out,8," PUBLIC ");
      _xmlBufferWriteQuotedString((xmlBufferPtr)out->buffer,*(xmlChar **)(param_2 + 0x68));
      _xmlOutputBufferWrite(out,1," ");
      _xmlBufferWriteQuotedString((xmlBufferPtr)out->buffer,*(xmlChar **)(param_2 + 0x70));
    }
    if (((*(long *)(param_2 + 0x60) == 0) && (*(long *)(param_2 + 0x50) == 0)) &&
       ((*(long *)(param_2 + 0x58) == 0 &&
        ((*(long *)(param_2 + 0x48) == 0 && (*(long *)(param_2 + 0x78) == 0)))))) {
      _xmlOutputBufferWrite(out,1,">");
    }
    else {
      _xmlOutputBufferWrite(out,3," [\n");
      if ((*(long *)(param_2 + 0x48) != 0) &&
         ((*(long *)(param_2 + 0x40) == 0 ||
          (*(long *)(*(long *)(param_2 + 0x40) + 0x50) == param_2)))) {
        _xmlDumpNotationTable((xmlBufferPtr)out->buffer,*(xmlNotationTablePtr *)(param_2 + 0x48));
      }
      uVar1 = *(undefined4 *)(param_1 + 0x40);
      uVar2 = *(undefined4 *)(param_1 + 0x3c);
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x40);
      FUN_10024f26f(param_1,*(undefined8 *)(param_2 + 0x18));
      *(undefined4 *)(param_1 + 0x40) = uVar1;
      *(undefined4 *)(param_1 + 0x3c) = uVar2;
      *(undefined8 *)(param_1 + 0x30) = uVar3;
      _xmlOutputBufferWrite(out,2,"]>");
    }
  }
  return;
}


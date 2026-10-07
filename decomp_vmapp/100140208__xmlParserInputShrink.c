
void _xmlParserInputShrink(long *param_1)

{
  long lVar1;
  int iVar2;
  
  if ((((param_1 != (long *)0x0) && (*param_1 != 0)) && (param_1[3] != 0)) &&
     ((param_1[4] != 0 && (*(long *)(*param_1 + 0x20) != 0)))) {
    iVar2 = (int)param_1[4] - (int)**(undefined8 **)(*param_1 + 0x20);
    if (0xfa < iVar2) {
      iVar2 = _xmlBufferShrink(*(xmlBufferPtr *)(*param_1 + 0x20),iVar2 - 0x50);
      if (0 < iVar2) {
        param_1[4] = param_1[4] - (long)iVar2;
        param_1[8] = param_1[8] + (long)iVar2;
      }
      param_1[5] = **(long **)(*param_1 + 0x20) + (ulong)*(uint *)(*(long *)(*param_1 + 0x20) + 8);
    }
    if (*(uint *)(*(long *)(*param_1 + 0x20) + 8) < 0xfb) {
      _xmlParserInputBufferRead((xmlParserInputBufferPtr)*param_1,500);
      if (param_1[3] != **(long **)(*param_1 + 0x20)) {
        lVar1 = param_1[3];
        param_1[3] = **(long **)(*param_1 + 0x20);
        param_1[4] = **(long **)(*param_1 + 0x20) + (long)((int)param_1[4] - (int)lVar1);
      }
      param_1[5] = **(long **)(*param_1 + 0x20) + (ulong)*(uint *)(*(long *)(*param_1 + 0x20) + 8);
    }
  }
  return;
}



undefined1 FUN_100347670(long param_1,undefined8 *param_2)

{
  uint uVar1;
  long lVar2;
  uint *puVar3;
  undefined1 uVar4;
  
  uVar4 = 0;
  if (param_1 != 0) {
    lVar2 = _CGEventCreateData(0,param_1);
    if (lVar2 != 0) {
      uVar1 = _CFDataGetLength(lVar2);
      if ((long)((ulong)uVar1 << 0x20) < 0x100000000) {
        uVar4 = 0;
      }
      else {
        QByteArray::resize((int)param_2);
        puVar3 = (uint *)*param_2;
        if ((1 < *puVar3) || (*(long *)(puVar3 + 4) != 0x18)) {
          QByteArray::reallocData(param_2,puVar3[1] + 1,puVar3[2] >> 0x1f);
          puVar3 = (uint *)*param_2;
        }
        uVar4 = 1;
        _CFDataGetBytes(lVar2,0,(long)(int)uVar1,(long)puVar3 + *(long *)(puVar3 + 4));
      }
      _CFRelease(lVar2);
    }
  }
  return uVar4;
}


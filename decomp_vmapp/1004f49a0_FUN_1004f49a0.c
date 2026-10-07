
undefined8 * FUN_1004f49a0(undefined8 *param_1,long *param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  
  pbVar2 = (byte *)QString::utf16();
  uVar3 = 0xffff;
  if (*(int *)(*param_2 + 4) != 0) {
    lVar5 = -(long)(*(int *)(*param_2 + 4) * 2);
    uVar4 = 0xffff;
    do {
      bVar1 = *pbVar2;
      pbVar2 = pbVar2 + 1;
      uVar3 = (uint)(ushort)((ushort)((int)uVar4 << 8) ^
                            *(ushort *)
                             (&DAT_100b455a0 + (ulong)((uint)(uVar4 >> 8) ^ (uint)bVar1) * 2));
      uVar4 = (ulong)uVar3;
      lVar5 = lVar5 + 1;
    } while (lVar5 != 0);
  }
  *param_1 = PTR_shared_null_100ba20d0;
  QString::insert(param_1,0,(int)"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"[uVar3 % 0x24]);
  QString::insert(param_1,0,(int)"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"[(uVar3 / 0x24) % 0x24]);
  QString::insert(param_1,0,(int)"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"[(uVar3 / 0x510) % 0x24]);
  return param_1;
}



undefined8 FUN_100137d60(QObject *param_1,QEvent *param_2,long param_3)

{
  int iVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x10);
  iVar1 = *(int *)(lVar5 + 8);
  if (iVar1 != *(int *)(lVar5 + 0xc)) {
    puVar4 = (undefined8 *)(lVar5 + 0x10 + (long)iVar1 * 8);
    lVar5 = (long)*(int *)(lVar5 + 0xc) * 8 + (long)iVar1 * -8;
    do {
      puVar2 = (uint *)*puVar4;
      if (*puVar2 == (uint)*(ushort *)(param_3 + 0x10)) {
        *(byte *)(param_3 + 0x12) = *(byte *)(param_3 + 0x12) & 0xfb;
        return CONCAT71((int7)((ulong)puVar2 >> 8),1);
      }
      puVar4 = puVar4 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  uVar3 = QObject::eventFilter(param_1,param_2);
  return uVar3;
}


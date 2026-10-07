
undefined8 FUN_1007a4b40(long param_1,undefined4 param_2,undefined4 param_3)

{
  QArrayData *pQVar1;
  int iVar2;
  ulong uVar3;
  undefined4 *puVar4;
  QArrayData *local_38;
  
  if (*(int *)(param_1 + 0x68) == 2) {
    puVar4 = (undefined4 *)PTR_DAT_100ba2178;
    if ((*(char *)(param_1 + 0x370) == '\0') ||
       (uVar3 = FUN_10080ee80(*(undefined8 *)(param_1 + 0x328)), puVar4 = &DAT_100b4b090,
       (uVar3 & 0x3000) != 0)) goto LAB_1007a4bc1;
    iVar2 = FUN_1007c91d0(param_1 + 400,param_2,*(undefined4 *)(param_1 + 0x2e8),&DAT_100b4b090,0x48
                          ,param_3,0);
  }
  else {
    puVar4 = (undefined4 *)&DAT_100b4b048;
LAB_1007a4bc1:
    iVar2 = FUN_1007c7b80(param_1 + 400,param_2,*(undefined4 *)(param_1 + 0x2e8),puVar4,0x48,param_3
                          ,0);
  }
  if (iVar2 == 0) {
    return 1;
  }
  pQVar1 = *(QArrayData **)(param_1 + 0x18);
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    UNLOCK();
  }
  QString::toLocal8Bit();
  FUN_1008e3970("","IOCommunication",0,
                "%sProxy handshake error: protocol version send has been failed!",
                local_38 + *(long *)(local_38 + 0x10));
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) goto LAB_1007a4c76;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_1007a4c76:
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1007a4ca6;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1007a4ca6:
  *(undefined4 *)(param_1 + 0xa4) = 8;
  return 0;
}


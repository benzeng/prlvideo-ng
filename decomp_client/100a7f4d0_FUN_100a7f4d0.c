
undefined8 FUN_100a7f4d0(long param_1,undefined4 param_2,undefined4 param_3)

{
  QArrayData *pQVar1;
  int iVar2;
  ulong uVar3;
  undefined4 *puVar4;
  QArrayData *local_38;
  
  if (*(int *)(param_1 + 0x68) == 2) {
    puVar4 = (undefined4 *)PTR_DAT_1021e15b8;
    if ((*(char *)(param_1 + 0x370) == '\0') ||
       (uVar3 = FUN_100be45f0(*(undefined8 *)(param_1 + 0x328)), puVar4 = &DAT_101cd4630,
       (uVar3 & 0x3000) != 0)) goto LAB_100a7f551;
    iVar2 = FUN_100aa39b0(param_1 + 400,param_2,*(undefined4 *)(param_1 + 0x2e8),&DAT_101cd4630,0x48
                          ,param_3,0);
  }
  else {
    puVar4 = (undefined4 *)&DAT_101cd45e8;
LAB_100a7f551:
    iVar2 = FUN_100aa2360(param_1 + 400,param_2,*(undefined4 *)(param_1 + 0x2e8),puVar4,0x48,param_3
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
  FUN_100df99c0("","IOCommunication",0,
                "%sProxy handshake error: protocol version send has been failed!",
                local_38 + *(long *)(local_38 + 0x10));
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) goto LAB_100a7f606;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_100a7f606:
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_100a7f636;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100a7f636:
  *(undefined4 *)(param_1 + 0xa4) = 8;
  return 0;
}


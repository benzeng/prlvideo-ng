
void FUN_1000c6a60(long param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  ulong uVar4;
  uint *puVar5;
  ulong uVar6;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  iVar1 = param_2[1];
  if ((iVar1 == 0) && (*param_2 == 0)) {
    return;
  }
  if ((iVar1 == *(int *)(param_1 + 0x21c)) && (*param_2 == *(int *)(param_1 + 0x218))) {
    return;
  }
  if ((iVar1 == *(int *)(param_1 + 0x214)) && (*param_2 == *(int *)(param_1 + 0x210))) {
    return;
  }
  puVar5 = *(uint **)(param_1 + 0x58);
  uVar4 = 0xffffffff;
  if ((int)puVar5[2] < (int)puVar5[3]) {
    uVar6 = 0;
    do {
      if (1 < *puVar5) {
        FUN_1000e6e10((undefined8 *)(param_1 + 0x58),puVar5[1]);
        puVar5 = *(uint **)(param_1 + 0x58);
      }
      if ((*(int *)(*(long *)(puVar5 + (uVar6 + (long)(int)puVar5[2]) * 2 + 4) + 0x30) == *param_2)
         && (*(int *)(*(long *)(puVar5 + (uVar6 + (long)(int)puVar5[2]) * 2 + 4) + 0x34) ==
             param_2[1])) {
        if (-1 < (int)uVar6) {
          bVar3 = false;
          goto LAB_1000c6b40;
        }
        uVar4 = uVar6 & 0xffffffff;
        break;
      }
      uVar6 = uVar6 + 1;
    } while ((long)uVar6 < (long)(int)puVar5[3] - (long)(int)puVar5[2]);
  }
  uVar6 = uVar4;
  FUN_1000ddc60(param_1,param_2);
  bVar3 = true;
LAB_1000c6b40:
  FUN_1000c4970(param_2,0x6c,0,0);
  if (DAT_10230ffd0 < 2) goto LAB_1000c6c26;
  iVar1 = *param_2;
  iVar2 = param_2[1];
  FUN_1000ae530(&local_48,param_2);
  QString::toUtf8();
  FUN_100df99c0("SGAC","prl_client_app",2,
                "No use in running helper with psn={%u, %u}, i=%i, bundlePath=\"%s\"",iVar1,iVar2,
                (int)uVar6,local_40 + *(long *)(local_40 + 0x10));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000c6bf2;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_1000c6bf2:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000c6c26;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1000c6c26:
  if (!bVar3) {
    FUN_1000ddd20(param_1,uVar6 & 0xffffffff);
  }
  return;
}


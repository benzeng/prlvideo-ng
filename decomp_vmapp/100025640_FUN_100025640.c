
void FUN_100025640(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  uint local_38 [4];
  QArrayData *local_28;
  uint local_1c;
  
  if (*(char *)(param_1 + 0x70) != '\0') {
    local_1c = (uint)*(byte *)(param_1 + 0x88);
    FUN_1004c2f50(*(undefined8 *)(param_1 + 0x78),8,&local_1c,4,1,0);
  }
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x80) + 0xa0);
  pcVar3 = "";
  if (*(byte *)(param_1 + 0x89) != 0) {
    pcVar3 = "/Volumes";
  }
  local_28 = (QArrayData *)QString::fromAscii_helper(pcVar3,(uint)*(byte *)(param_1 + 0x89) << 3);
  FUN_1004ec530(uVar2,&local_28);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      local_1c = CONCAT31(local_1c._1_3_,*(int *)local_28 != 0);
      if (*(int *)local_28 != 0) goto LAB_1000256ef;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1000256ef:
  if ((*(long *)(param_1 + 0x78) != 0) && (*(char *)(param_1 + 0x8a) != '\0')) {
    FUN_1004c2f50(*(long *)(param_1 + 0x78),7,param_1 + 0x8c,0x10,1,0);
  }
  iVar1 = *(int *)(param_1 + 0xa8);
  if ((iVar1 != 0) &&
     (*(uint *)(param_1 + 0xa8) = (iVar1 != 1) + 1, *(char *)(param_1 + 0x70) != '\0')) {
    local_1c = (uint)(iVar1 != 1);
    FUN_1004c2f50(*(undefined8 *)(param_1 + 0x78),0xd,&local_1c,4,1,1);
  }
  local_38[0] = (uint)*(byte *)(param_1 + 0xa4);
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  FUN_1004c2f50(*(undefined8 *)(param_1 + 0x78),0x13,local_38,0x10,1,0);
  return;
}


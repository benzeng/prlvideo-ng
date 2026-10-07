
undefined8 FUN_1004eea20(undefined8 *param_1,long param_2)

{
  char *pcVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  ulong extraout_RDX;
  bool bVar7;
  QArrayData *local_d0;
  undefined4 local_c4;
  undefined1 local_c0 [144];
  
  uVar3 = *(uint *)(param_2 + 0x10);
  uVar4 = uVar3 & 0xb00;
  if (uVar4 == 0) goto LAB_1004eeb8c;
  if (uVar4 == 0x200) {
    iVar5 = 2;
  }
  else {
    iVar5 = 0;
    if (uVar4 == 0x100) {
      iVar5 = 1;
    }
  }
  if (((uVar3 & 0x20000) == 0) ||
     (uVar4 = *(uint *)(param_1 + 2) & 2, (uVar3 & 0x20000) == 0 && uVar4 == 0)) {
    uVar4 = *(uint *)(param_1 + 2) & 1;
  }
  if (uVar4 == 0) goto LAB_1004eeb8c;
  if (iVar5 == 0) {
    iVar5 = _lstat_INODE64(*(undefined8 *)(param_2 + 8),local_c0);
    iVar5 = 2 - (uint)(iVar5 == 0);
  }
  bVar2 = *(byte *)*param_1;
  if ((bVar2 & 1) == 0) {
    uVar6 = (ulong)(bVar2 >> 1);
  }
  else {
    uVar6 = *(ulong *)((byte *)*param_1 + 8);
  }
  pcVar1 = (char *)(uVar6 + 1 + *(long *)(param_2 + 8));
  _strlen(pcVar1);
  QByteArray::fromRawData((char *)&local_d0,(int)pcVar1);
  local_c4 = qHash((QByteArray *)&local_d0,0);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_c0[0] = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_c0[0]) goto LAB_1004eeb3f;
    }
    QArrayData::deallocate(local_d0,1,8);
  }
LAB_1004eeb3f:
  if (iVar5 == 2) {
    FUN_1004efb40(param_1 + 3,&local_c4);
    return 2;
  }
  if ((iVar5 == 1) && (FUN_1004efa50(param_1 + 3,&local_c4), (extraout_RDX & 1) != 0)) {
    return 1;
  }
LAB_1004eeb8c:
  if ((uVar3 & 0xf400) != 0) {
    if (((uVar3 & 0xb400) == 0) ||
       (bVar7 = (*(byte *)(param_1 + 2) & 0x3c) != 0, (*(byte *)(param_1 + 2) & 0x3c) == 0)) {
      if ((uVar3 & 0x4000) == 0) {
        bVar7 = false;
      }
      else {
        bVar7 = (bool)(*(byte *)((long)param_1 + 0x11) & 1);
      }
    }
    if (bVar7 != false) {
      return 3;
    }
  }
  return 0;
}


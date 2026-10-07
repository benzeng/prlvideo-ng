
int FUN_1000be660(long param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  QArrayData *local_38;
  QArrayData *local_30;
  QFileInfo local_28 [15];
  undefined1 local_19;
  
  cVar2 = FUN_1000a92d0();
  if (cVar2 == '\0') {
    iVar3 = FUN_100409090(param_1 + 0x10b0);
    if (iVar3 < 0) {
      return iVar3;
    }
    if (iVar3 != 0) {
      return -0x7fffffbc;
    }
  }
  FUN_1000a9950(param_1,1);
  uVar4 = *(undefined8 *)(param_1 + 0xf0);
  lVar5 = *(long *)(*(long *)(param_1 + 0x1940) + 0x60);
  local_30 = *(QArrayData **)(lVar5 + 8);
  uVar1 = *(undefined8 *)(lVar5 + 0x28);
  if (1 < *(int *)local_30 + 1U) {
    LOCK();
    *(int *)local_30 = *(int *)local_30 + 1;
    local_19 = *(int *)local_30 != 0;
    UNLOCK();
  }
  lVar5 = (ulong)*(uint *)(param_1 + 0x5ac) << 0x14;
  FUN_10042fb30(uVar4,uVar1,&local_30,0,lVar5,lVar5,(ulong)*(uint *)(param_1 + 0x5b0) << 0x14);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1000be72c;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1000be72c:
  DAT_100bf8d7d = DAT_100bf8d7d | 1;
  DAT_100bf8d64 = param_1;
  DAT_100bf02f4 = FUN_1000e99d0(*(undefined8 *)(param_1 + 0x1158),0x67,0);
  DAT_100bf030d = DAT_100bf030d | 1;
  DAT_100bf8ca4 = param_1 + 0x1938;
  DAT_100bf8cbd = DAT_100bf8cbd | 2;
  FUN_10008f1c0(param_1,5,1000,0,1);
  QFileInfo::QFileInfo(local_28,(QString *)(*(long *)(*(long *)(param_1 + 0x1940) + 0x60) + 8));
  QFileInfo::absolutePath();
  QFileInfo::~QFileInfo(local_28);
  cVar2 = FUN_1006fa5d0(&local_38);
  uVar4 = 150000000;
  if (cVar2 != '\0') {
    uVar4 = 500000000;
  }
  *(undefined8 *)(param_1 + 0x109b8) = uVar4;
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1000be80d;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1000be80d:
  *(undefined4 *)(param_1 + 0x109c0) = 1;
  cVar2 = FUN_1000a4620(param_1);
  if (cVar2 == '\0') {
    iVar3 = *(int *)(param_1 + 0x109c0) * 1000;
  }
  else {
    iVar3 = 0;
  }
  FUN_10008f1c0(param_1,6,iVar3,0,1);
  return 0;
}


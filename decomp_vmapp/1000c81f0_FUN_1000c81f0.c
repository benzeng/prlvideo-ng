
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000c81f0(long param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  QString local_38;
  QFileInfo local_30 [15];
  undefined1 local_21;
  
  FUN_1000c6990();
  DAT_1011c36a4 = 0x3008d;
  _DAT_1011c36a8 = 0x40001;
  *(undefined1 *)(param_1 + 0x2e8) = 0;
  *(undefined1 *)(param_1 + 0x1f8) = 0;
  *(undefined4 *)(param_1 + 0x2ec) = 0;
  *(undefined8 *)(param_1 + 0x310) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x308) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x300) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x2f8) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x2f0) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 500) = 0;
  *(undefined4 *)(param_1 + 0x204) = 0;
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getHomePath();
  QFileInfo::QFileInfo(local_30,&local_38);
  QFileInfo::operator=((QFileInfo *)(param_1 + 0x330),local_30);
  QFileInfo::~QFileInfo(local_30);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_21 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000c82f9;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_1000c82f9:
  DAT_1011c37a0._0_4_ = FUN_1007da300("vm.sare_verbose",0);
  *(uint *)(param_1 + 0x1f0) = param_2;
  if ((param_2 & 0x5000000) == 0) {
    *(undefined8 *)(param_1 + 800) = 0;
    *(undefined4 *)(param_1 + 0x338) = 0;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x2b0);
    if (lVar2 == 0) {
      *(undefined4 *)(param_1 + 800) = 0xffffffff;
      uVar3 = 0xffffffff;
      iVar4 = 0x1fffffe0;
    }
    else {
      uVar1 = *(uint *)(lVar2 + 0x5ac);
      *(uint *)(param_1 + 800) = uVar1;
      uVar3 = *(uint *)(lVar2 + 0x5b0);
      iVar4 = (uVar1 & 0xffffff) << 5;
    }
    *(uint *)(param_1 + 0x324) = uVar3;
    *(int *)(param_1 + 0x338) = iVar4;
    *(uint *)(param_1 + 0x33c) = (uVar3 & 0xffffff) << 5;
  }
  return;
}


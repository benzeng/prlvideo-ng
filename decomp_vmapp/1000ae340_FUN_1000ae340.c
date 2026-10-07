
undefined4 * FUN_1000ae340(undefined4 *param_1,long param_2)

{
  long lVar1;
  int iVar2;
  QDir local_90 [8];
  QString local_88;
  QString local_80;
  QFileInfo local_78 [8];
  QString local_70;
  QArrayData *local_68;
  long local_60;
  code *local_58;
  code *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  code *local_40;
  undefined1 local_31;
  
  lVar1 = *(long *)(param_2 + 0x1930);
  if ((*(byte *)(lVar1 + 0x233) & 0x80) == 0) {
    local_48 = 4;
    local_40 = FUN_10078bf20;
  }
  else if (*(short *)(lVar1 + 0x220) == 0x40) {
    local_48 = 3;
    local_40 = FUN_10078c280;
  }
  else if (*(short *)(lVar1 + 0x220) == 0x20) {
    if ((*(byte *)(lVar1 + 0x98) & 0x20) == 0) {
      local_48 = 1;
      local_40 = FUN_10078bf40;
    }
    else {
      local_48 = 2;
      local_40 = FUN_10078c0a0;
    }
  }
  else {
    local_48 = 0;
    local_40 = FUN_10078bf30;
  }
  local_60 = (ulong)*(uint *)(param_2 + 0x5ac) << 0x14;
  local_58 = FUN_1000ae810;
  local_50 = FUN_1000ae880;
  iVar2 = *(int *)(param_2 + 0x1164);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_2 + 0x5d8);
    *(int *)(param_2 + 0x1164) = iVar2;
  }
  FUN_10078b400(param_2 + 0x1ad0,lVar1,iVar2,&local_60);
  if (*(int *)(*(long *)(param_2 + 0x1170) + 4) != 0) goto LAB_1000ae588;
  local_68 = (QArrayData *)QString::fromAscii_helper("memory.elf.dmp",0xe);
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getHomePath();
  QFileInfo::QFileInfo(local_78,&local_80);
  QFileInfo::absolutePath();
  QFileInfo::~QFileInfo(local_78);
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_31 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000ae4bc;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_1000ae4bc:
  QDir::QDir(local_90,&local_70);
  QDir::absoluteFilePath(&local_88);
  QString::operator=((QString *)(param_2 + 0x1170),&local_88);
  if (*(int *)local_88.field0_0x0 != -1) {
    if (*(int *)local_88.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
      local_31 = *(int *)local_88.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000ae51c;
    }
    QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
  }
LAB_1000ae51c:
  QDir::~QDir(local_90);
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_31 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000ae558;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_1000ae558:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000ae588;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1000ae588:
  *(undefined **)(param_1 + 2) = PTR_shared_null_100ba20d0;
  *param_1 = *(undefined4 *)(param_2 + 0x5c0);
  param_1[1] = *(undefined4 *)(param_2 + 0x1178);
  QString::operator=((QString *)(param_1 + 2),(QString *)(param_2 + 0x1170));
  *(long *)(param_1 + 4) = param_2 + 0x1ad0;
  iVar2 = *(int *)(param_2 + 0x1164);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_2 + 0x5d8);
    *(int *)(param_2 + 0x1164) = iVar2;
  }
  param_1[6] = iVar2;
  *(code **)(param_1 + 0x10) = local_40;
  *(ulong *)(param_1 + 0xe) = CONCAT44(uStack_44,local_48);
  *(code **)(param_1 + 0xc) = local_50;
  *(code **)(param_1 + 10) = local_58;
  *(long *)(param_1 + 8) = local_60;
  return param_1;
}


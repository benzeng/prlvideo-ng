
int FUN_100112560(long param_1,byte param_2)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  QArrayData *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined8 *local_3c;
  undefined4 local_34;
  uint local_30;
  
  CVmConfiguration::getVmHardwareList();
  uVar3 = CVmHardware::getMemory();
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_58 = 0;
  iVar2 = FUN_100112250(param_1,uVar3,&local_78,1);
  if (iVar2 < 0) {
    return iVar2;
  }
  iVar2 = FUN_100060640();
  if (iVar2 == 0) {
    local_58 = CONCAT44(1,(undefined4)local_58);
  }
  else {
    QFileInfo::QFileInfo
              ((QFileInfo *)&local_48,
               (QString *)(*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x1940) + 0x60) + 8));
    QFileInfo::absolutePath();
    QFileInfo::~QFileInfo((QFileInfo *)&local_48);
    bVar1 = FUN_1006fa5d0(&local_80);
    local_58 = (ulong)CONCAT14(bVar1 | param_2,(undefined4)local_58);
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        UNLOCK();
        local_48 = CONCAT31(local_48._1_3_,*(int *)local_80 != 0);
        if (*(int *)local_80 != 0) goto LAB_100112653;
      }
      QArrayData::deallocate(local_80,2,8);
    }
  }
LAB_100112653:
  local_34 = 0;
  local_30 = 0xffffffff;
  local_48 = 0x80d;
  local_44 = 0x28;
  local_40 = 0;
  iVar4 = 0;
  local_3c = &local_78;
  iVar2 = FUN_100683330(param_1 + 0xc,0x601c7801,&local_48,0x1c);
  uVar5 = ~-(uint)(iVar2 == 0) | local_30;
  if (uVar5 == 0x80000006) {
    iVar4 = -0x7ffffa7e;
    if (local_58._4_4_ != 0) {
      FUN_1008e3970("","vm",0,"!!!! Overcommit option is not working");
      iVar4 = -0x7fffffbf;
    }
  }
  else if (uVar5 == 0x80000007) {
    FUN_1008e3970("","vm",0,"Unable to load vm due to mem lack");
    iVar4 = -0x7ffffe6a;
  }
  else if (uVar5 != 0) {
    FUN_1008e3970("","vm",0,"PMM_INIT failed %x");
    iVar4 = -0x7ffffe8e;
  }
  return iVar4;
}


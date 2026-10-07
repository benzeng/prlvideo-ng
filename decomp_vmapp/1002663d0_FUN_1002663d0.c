
int FUN_1002663d0(long param_1,CVmParallelPort *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QRegExp local_38 [15];
  undefined1 local_29;
  
  iVar1 = FUN_100264270();
  if (iVar1 < 0) {
    return iVar1;
  }
  CVmParallelPort::operator=((CVmParallelPort *)(param_1 + 8),param_2);
  local_40 = (QArrayData *)QString::fromAscii_helper("\\d+",3);
  QRegExp::QRegExp(local_38,&local_40,1,0);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10026645e;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10026645e:
  CVmDevice::getSystemName();
  iVar1 = QRegExp::lastIndexIn(local_38,&local_48,0xffffffff,0);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002664b0;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1002664b0:
  if (iVar1 < 0) {
    uVar3 = CVmDevice::getIndex();
    iVar1 = -0x7fff9000;
    FUN_1008e3970("","LocalDevices",0,"LPT port target %u port index can\'t be found",uVar3);
    goto LAB_100266605;
  }
  QRegExp::cap((int)&local_50);
  uVar2 = QString::toUInt((bool *)&local_50,0);
  *(uint *)(param_1 + 0x104) = uVar2;
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 == 0) {
LAB_1002664ff:
      QArrayData::deallocate(local_50,2,8);
    }
    else {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if (!(bool)local_29) goto LAB_1002664ff;
    }
    uVar2 = *(uint *)(param_1 + 0x104);
  }
  if (uVar2 < 3) {
    *(ulong *)(param_1 + 0x110) =
         *(long *)(DAT_1011c3698 + 0x1938) + 0x39e30 + (ulong)uVar2 * 0x1030;
    iVar4 = FUN_1002666f0(param_1);
    iVar1 = 0;
    if (iVar4 == 0) {
      uVar3 = CVmDevice::getIndex();
      FUN_1008e3970("","LocalDevices",0,"LPT port target %u can\'t be locked",uVar3);
      iVar1 = -0x7fff9000;
      QFile::remove((QString *)(param_1 + 0x118));
    }
  }
  else {
    uVar3 = CVmDevice::getIndex();
    iVar1 = -0x7fff9000;
    FUN_1008e3970("","LocalDevices",0,"LPT port target %u port index can\'t be found (%d)",uVar3,
                  *(undefined4 *)(param_1 + 0x104));
  }
LAB_100266605:
  QRegExp::~QRegExp(local_38);
  return iVar1;
}


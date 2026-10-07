
void FUN_1006b4110(uint param_1,int *param_2,int *param_3,uint *param_4)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  size_t sVar5;
  QString local_68;
  QHostAddress local_60 [8];
  QString local_58;
  QHostAddress local_50 [8];
  QString local_48;
  QHostAddress local_40 [15];
  undefined1 local_31;
  
  local_48.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("255.255.255.0",0xd);
  QHostAddress::QHostAddress(local_40,&local_48);
  uVar2 = QHostAddress::toIPv4Address();
  QHostAddress::~QHostAddress(local_40);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006b419c;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1006b419c:
  iVar3 = FUN_1006d65a0();
  if ((param_1 < 2) && (iVar3 == 1)) {
    pcVar1 = (&PTR_s_10_211_55_0_100bcd5b0)[param_1];
    sVar5 = _strlen(pcVar1);
    local_58.field0_0x0 =
         (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(pcVar1,(int)sVar5);
    QHostAddress::QHostAddress(local_50,&local_58);
    uVar4 = QHostAddress::toIPv4Address();
    QHostAddress::~QHostAddress(local_50);
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        UNLOCK();
        if (*(int *)local_58.field0_0x0 != 0) goto LAB_1006b42a5;
        local_31 = 0;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
    goto LAB_1006b42a5;
  }
  local_68.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("10.37.130.0",0xb);
  QHostAddress::QHostAddress(local_60,&local_68);
  iVar3 = QHostAddress::toIPv4Address();
  QHostAddress::~QHostAddress(local_60);
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_68.field0_0x0 != 0) goto LAB_1006b429e;
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_1006b429e:
  uVar4 = iVar3 + param_1 * 0x100;
LAB_1006b42a5:
  *param_2 = uVar4 + 1;
  *param_3 = (~uVar2 | uVar4) - 1;
  *param_4 = uVar2;
  return;
}


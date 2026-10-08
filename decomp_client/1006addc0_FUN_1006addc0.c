
undefined1
FUN_1006addc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  char cVar1;
  int iVar2;
  undefined1 uVar3;
  QArrayData *local_40;
  QVariant local_38;
  undefined1 local_21;
  
  QObject::property((char *)&local_38);
  if ((local_38.field0_0x0.field1_0x8.bitField0_30 & 0x3fffffff) == 0) {
    *param_4 = 0;
    uVar3 = 0;
  }
  else {
    *param_4 = 1;
    QVariant::toBitArray();
    iVar2 = 0;
    if ((int)(char)local_40[*(long *)(local_40 + 0x10)] < *(int *)(local_40 + 4) * 8) {
      do {
        if (((byte)local_40[(long)((iVar2 >> 3) + 1) + *(long *)(local_40 + 0x10)] >>
             ((byte)iVar2 & 7) & 1) != 0) {
          cVar1 = FUN_1006907a0(iVar2,param_2);
          uVar3 = 1;
          if (cVar1 != '\0') goto LAB_1006ade6c;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(local_40 + 4) * 8 - (int)(char)local_40[*(long *)(local_40 + 0x10)])
      ;
    }
    uVar3 = 0;
LAB_1006ade6c:
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_21 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1006adea5;
      }
      QArrayData::deallocate(local_40,1,8);
    }
  }
LAB_1006adea5:
  QVariant::~QVariant(&local_38);
  return uVar3;
}


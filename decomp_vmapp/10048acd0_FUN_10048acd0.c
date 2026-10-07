
undefined8 FUN_10048acd0(void)

{
  int iVar1;
  long lVar2;
  undefined8 in_RCX;
  undefined8 uVar3;
  QArrayData *local_48;
  QArrayData *local_40;
  QString local_38;
  QString local_30;
  undefined1 local_21;
  
  lVar2 = FUN_1002a6010(in_RCX);
  uVar3 = 0xffffffff;
  if ((lVar2 == 0) || (uVar3 = 1, *(int *)(lVar2 + 0x10) != 4)) {
    FUN_1008e3970("TCHOST","ToolsCenterHost",0,"GetToolCenterRetcode() = %d",uVar3);
    iVar1 = -0x7ffcbffc;
  }
  else {
    iVar1 = *(int *)(lVar2 + 0x2c);
  }
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("TCHOST","ToolsCenterHost",2,"Sync SSH Ids rc=%d",iVar1);
  }
  if (iVar1 != 0) {
    return 0;
  }
  local_30.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  iVar1 = FUN_100488f00(in_RCX,&local_30,0x800);
  if (iVar1 < 0) goto LAB_10048aecb;
  QString::trimmed();
  QString::operator=(&local_30,&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_21 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10048adce;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_10048adce:
  if (1 < DAT_1011b55f8) {
    QString::toUtf8();
    FUN_1008e3970("TCHOST","ToolsCenterHost",2,"Guest User: \'%s\'",
                  local_40 + *(long *)(local_40 + 0x10));
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_21 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10048ae3a;
      }
      QArrayData::deallocate(local_40,1,8);
    }
  }
LAB_10048ae3a:
  lVar2 = DAT_1011c3698;
  local_48 = (QArrayData *)QString::fromAscii_helper("parallels.Username.guest.cross",0x1e);
  iVar1 = FUN_100476480(lVar2 + 0x10840,&local_48,&local_30,&DAT_1011cc7b0);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10048aea9;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10048aea9:
  if (iVar1 != 0) {
    FUN_1008e3970("TCHOST","ToolsCenterHost",0,"Failed to set TIS record for guest user name");
  }
LAB_10048aecb:
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_30.field0_0x0 != 0) {
        return 0;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
  return 0;
}


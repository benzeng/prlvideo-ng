
undefined1 FUN_1005afd10(long param_1)

{
  char cVar1;
  bool bVar2;
  QArrayData *local_40;
  QArrayData *local_38;
  int local_2c;
  undefined8 local_28;
  
  if (*(int *)(param_1 + 0x30) == -1) {
    if (DAT_1011b55f8 < 3) {
      return 1;
    }
    QString::toUtf8();
    FUN_1008e3970("","vdisk",3,"Already closed [%s]",local_38 + *(long *)(local_38 + 0x10));
    if (*(int *)local_38 == -1) {
      return 1;
    }
    local_40 = local_38;
    if (*(int *)local_38 == 0) goto LAB_1005afe8b;
    LOCK();
    *(int *)local_38 = *(int *)local_38 + -1;
    bVar2 = *(int *)local_38 != 0;
    UNLOCK();
    local_28 = CONCAT71(local_28._1_7_,bVar2);
  }
  else {
    if ((*(byte *)(param_1 + 0xa0) & 2) != 0) {
      local_28 = 0;
      *(undefined8 *)(param_1 + 0xb4) = 0;
      local_2c = 0;
      cVar1 = FUN_1007080a0(param_1 + 0x28,param_1 + 0xa4,0x1000,&local_2c,0);
      if ((cVar1 == '\0') || (local_2c != 0x1000)) {
        FUN_1008e3970("","vdisk",0,
                      "Unable to write \'%s\' header(written %u, expected %u), err = %u",&local_28,
                      local_2c,0x1000,*(undefined4 *)(param_1 + 0x3c));
        FUN_1008e3970("","vdisk",0,"Unable to write \'unused\' signature");
        return 0;
      }
    }
    FUN_1007079c0(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0xa0) = 0;
    if (DAT_1011b55f8 < 3) {
      return 1;
    }
    QString::toUtf8();
    FUN_1008e3970("","vdisk",3,"Closed [%s]",local_40 + *(long *)(local_40 + 0x10));
    if (*(int *)local_40 == -1) {
      return 1;
    }
    if (*(int *)local_40 == 0) goto LAB_1005afe8b;
    LOCK();
    *(int *)local_40 = *(int *)local_40 + -1;
    bVar2 = *(int *)local_40 != 0;
    UNLOCK();
    local_28 = CONCAT71(local_28._1_7_,bVar2);
  }
  if (bVar2) {
    return 1;
  }
LAB_1005afe8b:
  QArrayData::deallocate(local_40,1,8);
  return 1;
}


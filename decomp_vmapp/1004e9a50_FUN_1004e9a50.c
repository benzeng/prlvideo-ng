
long FUN_1004e9a50(long *param_1,QString *param_2,undefined1 *param_3)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  QString QVar4;
  char cVar5;
  undefined8 uVar6;
  long unaff_R13;
  undefined8 local_70;
  QString local_68;
  QString local_60;
  int *local_58;
  int *local_50;
  int *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  FUN_1004d6ff0(&local_58,*param_1 + 0x50);
  local_50 = local_58 + (long)local_58[2] * 2 + 4;
  local_48 = local_58 + (long)local_58[3] * 2 + 4;
  local_40 = 1;
  bVar3 = true;
  if (local_58[2] != local_58[3]) {
    do {
      local_40 = 1;
      plVar1 = *(long **)local_50;
      cVar5 = operator==((QString *)(*plVar1 + 0x10),param_2);
      if (cVar5 != '\0') {
        cVar5 = operator==((QString *)(*plVar1 + 0x18),param_2 + 1);
        if (cVar5 == '\0') {
          if (*(char *)(*plVar1 + 0x33) == '\0') goto LAB_1004e9be0;
          *param_3 = 1;
          if (0 < DAT_1011b55f8) {
            QString::toUtf8_helper(&local_60);
            QVar4.field0_0x0 = local_60.field0_0x0;
            lVar2 = *(long *)(local_60.field0_0x0 + 0x10);
            QString::toUtf8_helper(&local_68);
            FUN_1008e3970("","SharedFoldersHost",1,
                          "Current Home folder path \"%s\" is different than in the saved state: \"%s\", will try to restore the state over the current path"
                          ,(QArrayData *)(QVar4.field0_0x0 + lVar2),
                          (QArrayData *)
                          (local_68.field0_0x0 + *(long *)(local_68.field0_0x0 + 0x10)));
            if (*(int *)local_68.field0_0x0 != -1) {
              if (*(int *)local_68.field0_0x0 != 0) {
                LOCK();
                *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
                local_31 = *(int *)local_68.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1004e9b88;
              }
              QArrayData::deallocate((QArrayData *)local_68.field0_0x0,1,8);
            }
LAB_1004e9b88:
            if (*(int *)local_60.field0_0x0 != -1) {
              if (*(int *)local_60.field0_0x0 != 0) {
                LOCK();
                *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
                local_31 = *(int *)local_60.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1004e9bc0;
              }
              QArrayData::deallocate((QArrayData *)local_60.field0_0x0,1,8);
            }
          }
        }
LAB_1004e9bc0:
        unaff_R13 = *plVar1;
        if ((*(char *)(unaff_R13 + 0x30) == *(char *)&param_2[4].field0_0x0) &&
           (*(char *)((long)&param_2[5].field0_0x0 + 1) != '\0')) {
          bVar3 = false;
          goto LAB_1004e9c03;
        }
      }
LAB_1004e9be0:
      local_50 = local_50 + 2;
      local_40 = 1;
    } while (local_50 != local_48);
    bVar3 = true;
  }
LAB_1004e9c03:
  if (*local_58 != -1) {
    if (*local_58 != 0) {
      LOCK();
      *local_58 = *local_58 + -1;
      local_31 = *local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004e9c2d;
    }
    FUN_1004d6ab0(&local_58,local_58);
  }
LAB_1004e9c2d:
  if (bVar3) {
    uVar6 = ___cxa_allocate_exception(0x10);
    local_70 = QString::fromAscii_helper("can\'t find SFolder for stub",0x1b);
    FUN_1004eb830(uVar6,&local_70);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(uVar6,&PTR_vtable_10111cdf0,FUN_1004eb5a0);
  }
  return unaff_R13;
}


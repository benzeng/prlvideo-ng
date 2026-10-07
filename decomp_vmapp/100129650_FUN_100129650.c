
undefined1 FUN_100129650(undefined8 param_1)

{
  char cVar1;
  undefined1 uVar2;
  QArrayData *pQVar3;
  QArrayData *pQVar4;
  QArrayData *pQVar5;
  QArrayData *pQVar6;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  pQVar3 = (QArrayData *)QString::fromAscii_helper("fs_generate_entry_name_cmd_dirpath",0x22);
  local_40 = pQVar3;
  cVar1 = FUN_10011d720(param_1,&local_40,1);
  if (cVar1 == '\0') {
    uVar2 = 0;
    goto LAB_1001297f4;
  }
  pQVar4 = (QArrayData *)
           QString::fromAscii_helper("fs_generate_entry_name_cmd_filename_prefix",0x2a);
  local_48 = pQVar4;
  cVar1 = FUN_10011d720(param_1,&local_48,1);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    pQVar5 = (QArrayData *)
             QString::fromAscii_helper("fs_generate_entry_name_cmd_filename_suffix",0x2a);
    local_50 = pQVar5;
    cVar1 = FUN_10011d720(param_1,&local_50,1);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      pQVar6 = (QArrayData *)
               QString::fromAscii_helper("fs_generate_entry_name_cmd_index_delimiter",0x2a);
      local_58 = pQVar6;
      uVar2 = FUN_10011d720(param_1,&local_58,1);
      if (*(int *)pQVar6 != -1) {
        if (*(int *)pQVar6 != 0) {
          LOCK();
          *(int *)pQVar6 = *(int *)pQVar6 + -1;
          local_31 = *(int *)pQVar6 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10012979a;
        }
        QArrayData::deallocate(pQVar6,2,8);
      }
    }
LAB_10012979a:
    if (*(int *)pQVar5 != -1) {
      if (*(int *)pQVar5 != 0) {
        LOCK();
        *(int *)pQVar5 = *(int *)pQVar5 + -1;
        local_31 = *(int *)pQVar5 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001297c7;
      }
      QArrayData::deallocate(pQVar5,2,8);
    }
  }
LAB_1001297c7:
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_31 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001297f4;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1001297f4:
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_31 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return uVar2;
      }
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
  return uVar2;
}


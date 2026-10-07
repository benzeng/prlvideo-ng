
void FUN_1000ae990(long param_1)

{
  char cVar1;
  int iVar2;
  undefined **local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined1 local_60 [8];
  QArrayData *local_58;
  undefined8 local_50;
  undefined1 local_40 [47];
  undefined1 local_11;
  
  if (*(long *)(param_1 + 0x1930) == 0) {
    return;
  }
  FUN_1000ae340(local_60,param_1);
  if (*(char *)(param_1 + 0x109ec) == '\0') {
    iVar2 = FUN_1007da300("kernel.scan_for_bugcheck",0);
    if (iVar2 == 0) goto LAB_1000aeac2;
    FUN_1008e3970("","vm",0,"Forcing scan of memory for bucheck");
    local_70 = 0;
    local_68 = 0;
    local_78 = &PTR_FUN_100bcec60;
    cVar1 = FUN_1007562e0(&local_78,local_50,local_40);
    if (cVar1 == '\0') {
      FUN_1008e3970("","vm",0,"No bugcheck was detected during memory scan");
      goto LAB_1000aeac2;
    }
  }
  else {
    FUN_1008e3970("","vm",0,"Guest crash was detected");
  }
  FUN_1008e3970("","vm",0,"Auto creating dbg dump file. Memory size %u Mb",
                *(undefined4 *)(param_1 + 0x5ac));
  iVar2 = FUN_1000f8e80(*(undefined8 *)(param_1 + 0x107d8),local_60);
  if (iVar2 != 0) {
    FUN_1008e3970("","vm",0,"Failed to create windbg dump file");
  }
LAB_1000aeac2:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return;
      }
      local_11 = 0;
    }
    QArrayData::deallocate(local_58,2,8);
  }
  return;
}


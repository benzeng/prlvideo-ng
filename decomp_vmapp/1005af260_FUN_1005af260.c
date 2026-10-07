
undefined1 FUN_1005af260(long *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  char cVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined8 *puVar7;
  long *plVar8;
  QArrayData *local_38;
  int local_30;
  undefined1 local_2a;
  
  cVar4 = FUN_1005aebd0();
  if (cVar4 == '\0') {
    FUN_1008e3970("","vdisk",0,"Failed to read LRU");
    return 0;
  }
  local_30 = 0;
  cVar4 = FUN_100707fb0(param_1 + 5,param_1[0x217],*(undefined4 *)((long)param_1 + 0x10b4),&local_30
                        ,0x3000);
  puVar3 = PTR_nothrow_100ba21c8;
  if (cVar4 == '\0') {
    iVar1 = *(int *)((long)param_1 + 0x10b4);
  }
  else {
    iVar1 = *(int *)((long)param_1 + 0x10b4);
    if (iVar1 == local_30) {
      plVar8 = *(long **)(*param_1 + 0x20);
      if (plVar8 != (long *)(*param_1 + 0x20)) {
        do {
          if (plVar8[-5] == 0) {
            puVar5 = operator_new__(0x20000,(nothrow_t *)puVar3);
            if (puVar5 == (undefined8 *)0x0) {
              FUN_1008e3970("","vdisk",0,"Table memory allocation failed. Error code");
              uVar2 = (undefined4)plVar8[2];
              pcVar6 = "No memory for group %u";
              goto LAB_1005af604;
            }
            puVar7 = puVar5;
            do {
              puVar7[1] = 0xffffffffffffffff;
              *puVar7 = 0xffffffffffffffff;
              puVar7[3] = 0;
              puVar7[2] = 0;
              puVar7[5] = 0xffffffffffffffff;
              puVar7[4] = 0xffffffffffffffff;
              puVar7[7] = 0;
              puVar7[6] = 0;
              puVar7[9] = 0xffffffffffffffff;
              puVar7[8] = 0xffffffffffffffff;
              puVar7[0xb] = 0;
              puVar7[10] = 0;
              puVar7[0xd] = 0xffffffffffffffff;
              puVar7[0xc] = 0xffffffffffffffff;
              puVar7[0xf] = 0;
              puVar7[0xe] = 0;
              puVar7[0x11] = 0xffffffffffffffff;
              puVar7[0x10] = 0xffffffffffffffff;
              puVar7[0x13] = 0;
              puVar7[0x12] = 0;
              puVar7[0x15] = 0xffffffffffffffff;
              puVar7[0x14] = 0xffffffffffffffff;
              puVar7[0x17] = 0;
              puVar7[0x16] = 0;
              puVar7[0x19] = 0xffffffffffffffff;
              puVar7[0x18] = 0xffffffffffffffff;
              puVar7[0x1b] = 0;
              puVar7[0x1a] = 0;
              puVar7[0x1d] = 0xffffffffffffffff;
              puVar7[0x1c] = 0xffffffffffffffff;
              puVar7[0x1f] = 0;
              puVar7[0x1e] = 0;
              puVar7 = puVar7 + 0x20;
            } while (puVar7 != puVar5 + 0x4000);
            plVar8[-5] = (long)puVar5;
          }
          cVar4 = FUN_1005ae880(param_1,plVar8 + -5);
          if (cVar4 == '\0') {
            uVar2 = (undefined4)plVar8[2];
            pcVar6 = "Failed for read group %u";
LAB_1005af604:
            FUN_1008e3970("","vdisk",0,pcVar6,uVar2);
            return 0;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)(*param_1 + 0x20));
      }
      if (DAT_1011b55f8 < 3) {
        return 1;
      }
      QString::toUtf8();
      FUN_1008e3970("","vdisk",3,"Readed [%s]",local_38 + *(long *)(local_38 + 0x10));
      if (*(int *)local_38 == -1) {
        return 1;
      }
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        UNLOCK();
        if (*(int *)local_38 != 0) {
          return 1;
        }
        local_2a = 0;
      }
      QArrayData::deallocate(local_38,1,8);
      return 1;
    }
  }
  FUN_1008e3970("","vdisk",0,"Unable to read bitmap (read %u, expected %u), err = %u",local_30,iVar1
                ,*(undefined4 *)((long)param_1 + 0x3c));
  FUN_1008e3970("","vdisk",0,"Failed to read bitmap");
  return 0;
}


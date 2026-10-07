
undefined1 FUN_100751370(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined4 uVar2;
  long lVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  long lVar7;
  char *pcVar8;
  long *plVar9;
  int *local_40;
  undefined4 local_38;
  undefined4 local_34;
  
  if (param_1[6] == 0) {
    cVar4 = FUN_100750570(param_1);
    if (cVar4 == '\0') {
      return 0;
    }
    if (param_1[6] != 0) {
      FUN_1008e3970("","Compression",0,"Uncompress to buffer failed: engine is active");
      return 0;
    }
    cVar4 = FUN_10074fd10(param_1,0x39,0,FUN_1007500d0,0,param_3);
    if (DAT_1011b55f8 < 2) {
      if (cVar4 == '\0') {
        return 0;
      }
    }
    else {
      FUN_1008e3970("","Compression",2,"Uncompress to buffer with %u workers",(int)param_1[2]);
      if (cVar4 == '\0') {
        return 0;
      }
    }
  }
  local_34 = *(undefined4 *)((long)param_1 + 0xc);
  local_38 = (undefined4)param_1[1];
  if (param_1[7] == 0) {
    lVar7 = (**(code **)(*param_1 + 0x40))(param_1);
    param_1[7] = lVar7;
    if (lVar7 != 0) goto LAB_10075146d;
    pcVar8 = "Uncompress to buffer: failed to allocate input buffer";
  }
  else {
LAB_10075146d:
    plVar1 = param_1 + 9;
    cVar4 = (**(code **)(*param_2 + 0x10))(param_2,param_1,plVar1,&local_34);
    lVar7 = param_1[9];
    if (cVar4 != '\0') {
      iVar6 = *(int *)((long)param_1 + 0x14);
      if (lVar7 == -1) {
LAB_100751568:
        if (iVar6 == 0) {
          uVar5 = (**(code **)(*param_2 + 0x20))(param_2);
          goto LAB_1007516d8;
        }
      }
      else {
        if (iVar6 != (int)param_1[2]) {
          plVar9 = (long *)param_1[5];
          if (plVar9 != param_1 + 4) {
            do {
              if (*(char *)(plVar9[2] + 0x72) != '\0') {
                *(undefined1 *)(plVar9[2] + 0x72) = 0;
                QSemaphore::release((int)param_1 + 0x18);
                *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + 1;
              }
              plVar9 = (long *)plVar9[1];
            } while (plVar9 != param_1 + 4);
            lVar7 = *plVar1;
            if (lVar7 == -1) goto LAB_1007515a8;
          }
        }
        lVar7 = (**(code **)(*param_3 + 0x28))(param_3,param_1,lVar7,&local_38);
        param_1[8] = lVar7;
        if (lVar7 == 0) {
          pcVar8 = "Uncompress to buffer: failed to get uncompressed data buffer";
          goto LAB_100751593;
        }
      }
LAB_1007515a8:
      local_40 = (int *)((long)param_1 + 0x14);
      lVar7 = FUN_10074fbd0(param_1);
      if (lVar7 == 0) {
        uVar5 = 0;
      }
      else if (*(char *)(lVar7 + 0x70) == '\0') {
        uVar5 = 0;
        FUN_1008e3970("","Compression",0,"Uncompress to buffer failed %llu,%u->%u",
                      *(undefined8 *)(lVar7 + 0x48),*(undefined4 *)(lVar7 + 0x60),
                      *(undefined4 *)(lVar7 + 100));
        *(undefined1 *)(lVar7 + 0x72) = 1;
        *local_40 = *local_40 + -1;
      }
      else {
        uVar2 = *(undefined4 *)(lVar7 + 100);
        lVar3 = param_1[8];
        param_1[8] = *(long *)(lVar7 + 0x58);
        *(long *)(lVar7 + 0x58) = lVar3;
        lVar3 = param_1[7];
        param_1[7] = *(long *)(lVar7 + 0x50);
        *(long *)(lVar7 + 0x50) = lVar3;
        lVar3 = param_1[9];
        param_1[9] = *(long *)(lVar7 + 0x48);
        *(long *)(lVar7 + 0x48) = lVar3;
        if (lVar3 == -1) {
          *(undefined1 *)(lVar7 + 0x72) = 1;
          *local_40 = *local_40 + -1;
        }
        else {
          *(undefined4 *)(lVar7 + 0x60) = local_34;
          *(undefined4 *)(lVar7 + 100) = local_38;
          *(undefined1 *)(lVar7 + 0x71) = 1;
          QSemaphore::release((int)lVar7 + 0x40);
        }
        if ((*plVar1 == -1) ||
           (cVar4 = (**(code **)(*param_3 + 0x30))(param_3,param_1,*plVar1,uVar2,param_1[8]),
           cVar4 != '\0')) {
          param_1[8] = 0;
          return 1;
        }
        uVar5 = 0;
        FUN_1008e3970("","Compression",0,"Uncompress to buffer: failed to put compressed data");
        param_1[8] = 0;
      }
      goto LAB_1007516d8;
    }
    if (lVar7 == -1) {
      iVar6 = *(int *)((long)param_1 + 0x14);
      goto LAB_100751568;
    }
    pcVar8 = "Uncompress to buffer: failed to get compressed data";
  }
LAB_100751593:
  uVar5 = 0;
  FUN_1008e3970("","Compression",0,pcVar8);
LAB_1007516d8:
  FUN_100751700(param_1,param_3);
  return uVar5;
}


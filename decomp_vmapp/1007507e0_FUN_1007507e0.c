
undefined1 FUN_1007507e0(long *param_1,long *param_2,long *param_3)

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
  int *piVar10;
  undefined4 local_34;
  
  if (param_1[6] == 0) {
    cVar4 = FUN_100750570(param_1);
    if (cVar4 == '\0') {
      return 0;
    }
    if (param_1[6] != 0) {
      FUN_1008e3970("","Compression",0,"Uncompress failed: engine is active");
      return 0;
    }
    cVar4 = FUN_10074fd10(param_1,0x39,0,FUN_100750020,0,0);
    if (DAT_1011b55f8 < 2) {
      if (cVar4 == '\0') {
        return 0;
      }
    }
    else {
      FUN_1008e3970("","Compression",2,"Uncompress with %u workers",(int)param_1[2]);
      if (cVar4 == '\0') {
        return 0;
      }
    }
  }
  local_34 = *(undefined4 *)((long)param_1 + 0xc);
  lVar7 = param_1[7];
  if (lVar7 == 0) {
    lVar7 = (**(code **)(*param_1 + 0x40))(param_1);
    param_1[7] = lVar7;
    if (lVar7 != 0) goto LAB_1007508de;
    pcVar8 = "Uncompress: failed to allocate input buffer";
  }
  else {
LAB_1007508de:
    if (param_1[8] == 0) {
      lVar7 = (**(code **)(*param_1 + 0x40))(param_1,(int)param_1[1]);
      param_1[8] = lVar7;
      if (lVar7 == 0) {
        pcVar8 = "Uncompress: failed to allocate output buffer";
        goto LAB_100750a8a;
      }
      lVar7 = param_1[7];
    }
    plVar1 = param_1 + 9;
    cVar4 = (**(code **)(*param_2 + 0x10))(param_2,param_1,plVar1,&local_34,lVar7);
    if (cVar4 != '\0') {
      iVar6 = *(int *)((long)param_1 + 0x14);
      if (param_1[9] == -1) {
LAB_1007509d3:
        if (iVar6 == 0) {
          cVar4 = (**(code **)(*param_2 + 0x20))(param_2);
          if (cVar4 == '\0') {
            uVar5 = 0;
          }
          else {
            uVar5 = (**(code **)(*param_3 + 0x20))();
          }
          goto LAB_100750a96;
        }
      }
      else if (iVar6 != (int)param_1[2]) {
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
        }
      }
      piVar10 = (int *)((long)param_1 + 0x14);
      lVar7 = FUN_10074fbd0(param_1);
      if (lVar7 == 0) {
        uVar5 = 0;
      }
      else if (*(char *)(lVar7 + 0x70) == '\0') {
        uVar5 = 0;
        FUN_1008e3970("","Compression",0,"Uncompress failed %llu,%u->%u",
                      *(undefined8 *)(lVar7 + 0x48),*(undefined4 *)(lVar7 + 0x60),
                      *(undefined4 *)(lVar7 + 100));
        *(undefined1 *)(lVar7 + 0x72) = 1;
        *piVar10 = *piVar10 + -1;
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
          *piVar10 = *piVar10 + -1;
        }
        else {
          *(undefined4 *)(lVar7 + 0x60) = local_34;
          *(int *)(lVar7 + 100) = (int)param_1[1];
          *(undefined1 *)(lVar7 + 0x71) = 1;
          QSemaphore::release((int)lVar7 + 0x40);
        }
        if (*plVar1 == -1) {
          return 1;
        }
        cVar4 = (**(code **)(*param_3 + 0x18))(param_3,param_1,*plVar1,uVar2,param_1[8]);
        if (cVar4 != '\0') {
          return 1;
        }
        uVar5 = 0;
        FUN_1008e3970("","Compression",0,"Uncompress: failed to put uncompressed data %llu,%u",
                      *plVar1,uVar2);
      }
      goto LAB_100750a96;
    }
    if (param_1[9] == -1) {
      iVar6 = *(int *)((long)param_1 + 0x14);
      goto LAB_1007509d3;
    }
    pcVar8 = "Uncompress: failed to get compressed data";
  }
LAB_100750a8a:
  uVar5 = 0;
  FUN_1008e3970("","Compression",0,pcVar8);
LAB_100750a96:
  FUN_100750b90(param_1);
  return uVar5;
}



int FUN_1006056a0(long *param_1,undefined8 param_2)

{
  ushort uVar1;
  uint uVar2;
  size_t sVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  long *plVar7;
  char *pcVar8;
  long lVar9;
  
  sVar3 = param_1[3];
  plVar7 = _malloc(sVar3);
  if (plVar7 == (long *)0x0) {
    FUN_1008e3970("","vdisk",0,"No memory for root dir buffer");
    return -0x7ffeffed;
  }
  ___bzero(plVar7,sVar3);
  _memcpy(plVar7,param_1 + 4,0x200);
  iVar6 = FUN_100603fb0(param_1,param_2,0,plVar7,sVar3);
  if (iVar6 < 0) {
    pcVar8 = "Write primary boot record failed, err = 0x%X";
  }
  else {
    iVar6 = FUN_100603fb0(param_1,param_2,*(undefined2 *)((long)param_1 + 0x52),plVar7,param_1[3]);
    if (iVar6 < 0) {
      pcVar8 = "Write backup boot record failed, err = 0x%X";
    }
    else {
      lVar9 = param_1[3];
      ___bzero(plVar7,lVar9);
      _memcpy(plVar7,param_1 + 0x44,0x200);
      iVar6 = FUN_100603fb0(param_1,param_2,(short)param_1[10],plVar7,lVar9);
      if (iVar6 < 0) {
        pcVar8 = "Write FS info failed, err = 0x%X";
      }
      else {
        uVar1 = *(ushort *)((long)param_1 + 0x2e);
        sVar3 = param_1[3];
        ___bzero(plVar7,sVar3);
        _memcpy(plVar7,(void *)param_1[0x88],sVar3);
        iVar6 = FUN_100603fb0(param_1,param_2,(ulong)uVar1,plVar7,sVar3);
        if (iVar6 < 0) {
          pcVar8 = "Write first copy of FAT failed, err = 0x%X";
        }
        else {
          lVar9 = (ulong)*(uint *)((long)param_1 + 0x44) + (ulong)uVar1;
          iVar6 = FUN_100603fb0(param_1,param_2,lVar9,plVar7,param_1[3]);
          if (iVar6 < 0) {
            pcVar8 = "Write second copy of FAT failed, err = 0x%X";
          }
          else {
            uVar2 = *(uint *)((long)param_1 + 0x44);
            lVar4 = param_1[3];
            ___bzero(plVar7,lVar4);
            plVar7[3] = param_1[0x87];
            plVar7[2] = param_1[0x86];
            lVar5 = param_1[0x84];
            plVar7[1] = param_1[0x85];
            *plVar7 = lVar5;
            iVar6 = FUN_100603fb0(param_1,param_2,(ulong)uVar2 + lVar9,plVar7,lVar4);
            if (-1 < iVar6) goto LAB_100605910;
            pcVar8 = "Write root dir sector failed, err = 0x%X";
          }
        }
      }
    }
  }
  FUN_1008e3970("","vdisk",0,pcVar8,iVar6);
  (**(code **)(*param_1 + 0x20))(param_1);
LAB_100605910:
  _free(plVar7);
  return iVar6;
}


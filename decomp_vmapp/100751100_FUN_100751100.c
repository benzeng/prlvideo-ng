
void FUN_100751100(long *param_1,long *param_2,long *param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  char *pcVar7;
  long local_40;
  undefined4 local_38;
  undefined4 local_34;
  
  lVar2 = (**(code **)(*param_1 + 0x40))(param_1,*(undefined4 *)((long)param_1 + 0xc));
  uVar3 = (**(code **)(*param_1 + 0x18))(param_1);
  if (lVar2 == 0) {
    FUN_1008e3970("","Compression",0,"Compress error path: failed to allocate input buffer");
    return;
  }
  local_40 = -1;
  do {
    uVar4 = (**(code **)(*param_3 + 0x40))(param_3);
    uVar5 = (**(code **)(*param_3 + 0x38))(param_3);
    if (uVar4 <= uVar5) goto LAB_1007512bd;
    local_38 = (undefined4)param_1[1];
    cVar1 = (**(code **)(*param_3 + 0x10))(param_3,param_1,&local_40,&local_34,lVar2);
    if ((cVar1 == '\0') || (local_40 == -1)) {
      FUN_1008e3970("","Compression",0,"Compress error path: failed to get compressed data");
      goto LAB_1007512bd;
    }
    lVar6 = (**(code **)(*param_2 + 0x28))(param_2,param_1,local_40,&local_38);
    if (lVar6 == 0) {
      pcVar7 = "Compress error path: failed to get uncompressed data buffer";
LAB_1007512b1:
      FUN_1008e3970("","Compression",0,pcVar7);
      goto LAB_1007512bd;
    }
    cVar1 = (**(code **)(*param_1 + 0x38))(param_1,lVar2,lVar6,local_34,&local_38,local_40,uVar3);
    if (cVar1 == '\0') {
      pcVar7 = "Compress error path: failed to uncompress data buffer";
      goto LAB_1007512b1;
    }
    cVar1 = (**(code **)(*param_2 + 0x30))(param_2,param_1,local_40,local_38,lVar6);
  } while (cVar1 != '\0');
  FUN_1008e3970("","Compression",0,"Compress error path: failed to put compressed data");
LAB_1007512bd:
  (**(code **)(*param_1 + 0x48))(param_1,lVar2);
  return;
}


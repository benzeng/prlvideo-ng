
undefined8 FUN_1000f8e80(undefined8 param_1,long param_2)

{
  char cVar1;
  long *plVar2;
  undefined8 uVar3;
  
  FUN_1008e3970("","vm",0,"Creating dbg dump file. Memory size %llu Mb",
                *(ulong *)(param_2 + 0x20) >> 0x14);
  FUN_1000f9130(param_1,0);
  plVar2 = (long *)FUN_100752fa0(*(uint *)(param_2 + 4) >> 2 & 3,param_1);
  if (plVar2 == (long *)0x0) {
    FUN_1008e3970("","vm",0,"Unknown dbgdump format");
  }
  else {
    cVar1 = (**(code **)(*plVar2 + 0x10))
                      (plVar2,*(undefined4 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10),
                       param_2 + 0x20,param_2 + 8,*(uint *)(param_2 + 4) & 3);
    (**(code **)(*plVar2 + 8))(plVar2);
    if (cVar1 != '\0') {
      uVar3 = 0;
      FUN_1008e3970("","vm",0,"Dbgdump file creation was finished successfully");
      goto LAB_1000f8f7f;
    }
  }
  FUN_1008e3970("","vm",0,"Failed to create dbgdump file");
  uVar3 = 0x80000009;
LAB_1000f8f7f:
  FUN_1000f9130(param_1,100);
  FUN_1000f8fd0(param_1,uVar3,param_2 + 8);
  FUN_1008e3970("","vm",0,"Memory dump creation FINISHED");
  return uVar3;
}


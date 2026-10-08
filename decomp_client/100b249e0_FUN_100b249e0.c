
undefined8 FUN_100b249e0(long *param_1,undefined4 param_2)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (*(int *)((long)param_1 + 0x14) == -1) {
    uVar3 = 0;
  }
  else {
    iVar2 = FUN_100ddc970(param_1[1],param_2);
    if (iVar2 < 0) {
      *(undefined4 *)((long)param_1 + 0x14) = 0xffffffff;
      plVar1 = (long *)*param_1;
      (**(code **)(*(long *)((long)plVar1 + *(long *)(*plVar1 + -0x18)) + 0x1a0))
                ((long)plVar1 + *(long *)(*plVar1 + -0x18));
    }
    else if (iVar2 != 0) {
      FUN_100df99c0("Compact","dimg",0,"[%p] Try to use USED block %u",*param_1,param_2);
      FUN_100b24b10(param_1,0);
      FUN_100dd5ef0(0,"MarkAsUsed:");
      FUN_100df99c0("Compact","dimg",0,"ASSERT( %s ) occured in %s:%d [%s]","0","StructuredBase.cpp"
                    ,0x61e,"MarkAsUsed");
    }
    iVar2 = FUN_100ddc4d0(param_1[1],param_2);
    if (iVar2 < 0) {
      *(undefined4 *)((long)param_1 + 0x14) = 0xffffffff;
      param_1 = (long *)*param_1;
      (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x1a0))
                ((long)param_1 + *(long *)(*param_1 + -0x18));
      uVar3 = 0;
    }
    else {
      *(int *)(param_1 + 2) = (int)param_1[2] + 1;
      uVar3 = 1;
    }
  }
  return uVar3;
}


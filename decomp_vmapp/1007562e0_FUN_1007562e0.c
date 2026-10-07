
undefined1 FUN_1007562e0(undefined8 param_1,long param_2,ulong *param_3)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  long local_3e8;
  long lStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 local_3b8;
  undefined1 local_3b0 [136];
  long local_328;
  undefined1 local_50 [40];
  
  uVar4 = 0;
  uVar2 = 0;
  if (param_3 != (ulong *)0x0) {
    uVar2 = *param_3;
    uVar4 = param_3[1];
    if (uVar4 == 0) {
      uVar4 = 0;
    }
    else if ((param_2 != 0) && (0xfff < uVar2)) {
      uVar5 = 0x14;
      if (*(short *)(param_2 + 0x220) != 0x20) {
        if (*(short *)(param_2 + 0x220) != 0x40) {
          FUN_1008e3970("","dbgdump",0,"unknown bitness: %d");
          return 0;
        }
        uVar5 = 0x28;
      }
      cVar1 = FUN_100753620(param_1,param_2,param_3,local_50,&local_3b8);
      if (cVar1 == '\0') {
        pcVar3 = "Failed to find DBG version block";
      }
      else {
        cVar1 = FUN_1007538c0(param_1,param_2,param_3,local_50,local_3b0,local_3b8,0,0);
        if (cVar1 == '\0') {
          pcVar3 = "Failed to read debugger data";
        }
        else {
          if (local_328 == 0) {
            return 0;
          }
          local_3d8 = 0;
          uStack_3d0 = 0;
          local_3e8 = 0;
          lStack_3e0 = 0;
          local_3c8 = 0;
          cVar1 = FUN_10078c4e0(param_3,*(undefined8 *)(param_2 + 0x90),local_328,&local_3e8,uVar5);
          if (cVar1 != '\0') {
            if (*(short *)(param_2 + 0x220) == 0x20) {
              if ((int)local_3e8 == 0) {
                return 0;
              }
              if ((int)((ulong)local_3e8 >> 0x20) == 0) {
                return 0;
              }
              FUN_1008e3970("","dbgdump",0,"Bugcheck %x, Status %x detected");
            }
            else {
              if (local_3e8 == 0) {
                return 0;
              }
              if (lStack_3e0 == 0) {
                return 0;
              }
              FUN_1008e3970("","dbgdump",0,"Bugcheck %llx, Status %llx detected");
            }
            return 1;
          }
          pcVar3 = "Failed to read KiBugcheckData. Ignored";
        }
      }
      FUN_1008e3970("","dbgdump",0,pcVar3);
      return 0;
    }
  }
  FUN_1008e3970("","dbgdump",0,"Invalid physical memory object %p %p %llu or dbg_ctx %p",param_3,
                uVar4,uVar2,param_2);
  return 0;
}


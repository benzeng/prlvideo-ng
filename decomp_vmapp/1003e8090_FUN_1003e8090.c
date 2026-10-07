
void FUN_1003e8090(long *param_1)

{
  long lVar1;
  code *pcVar2;
  byte *pbVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 *puVar8;
  ulong local_240;
  undefined1 local_238 [512];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_240 = 0;
  if (((*(byte *)((long)param_1 + 0x6c) & 2) == 0) &&
     (uVar7 = (ulong)*(uint *)(param_1 + 0x19), uVar7 != 0xffffffff)) {
    puVar8 = (undefined1 *)param_1[9];
  }
  else {
    puVar8 = local_238;
    uVar7 = 0x200;
  }
  pcVar2 = *(code **)(*param_1 + 0xb0);
  local_38 = lVar1;
  uVar4 = (**(code **)(*(long *)param_1[6] + 0xa0))((long *)param_1[6],0,0,0);
  iVar5 = (*pcVar2)(param_1,uVar4,param_1[0xb],2,puVar8,uVar7,param_1[0xc],0x12,&local_240);
  if ((iVar5 < 0) || (local_240 == 0)) {
    pbVar3 = (byte *)param_1[0xc];
    if ((*pbVar3 & 0x70) == 0x70) {
      (**(code **)(*param_1 + 0x270))
                (param_1,(uint)pbVar3[0xd] | (uint)pbVar3[0xc] << 8 | (uint)pbVar3[2] << 0x10);
    }
    else {
      (**(code **)(*param_1 + 0x268))(param_1,0x52400);
    }
  }
  else {
    uVar6 = local_240;
    if (uVar7 < local_240) {
      uVar6 = uVar7;
    }
    _memcpy((void *)param_1[9],puVar8,uVar6);
    (**(code **)(*param_1 + 0x278))(param_1,local_240 & 0xffffffff,local_240 & 0xffffffff);
  }
  if (lVar1 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


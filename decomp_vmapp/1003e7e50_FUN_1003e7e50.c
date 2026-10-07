
void FUN_1003e7e50(long *param_1)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  byte *pbVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  
  if (((*(byte *)((long)param_1 + 0x6c) & 2) != 0) ||
     (uVar7 = *(uint *)(param_1 + 0x19), uVar7 == 0xffffffff)) {
    uVar7 = (uint)CONCAT11((char)*(undefined2 *)(param_1[0xb] + 7),
                           (char)((ushort)*(undefined2 *)(param_1[0xb] + 7) >> 8));
  }
  pcVar1 = *(code **)(*param_1 + 0xb0);
  uVar5 = (**(code **)(*(long *)param_1[6] + 0xa0))((long *)param_1[6],0,0,0);
  iVar6 = (*pcVar1)(param_1,uVar5,param_1[0xb],1,param_1[10],uVar7,param_1[0xc],0x12,0);
  if (iVar6 < 0) {
    pbVar4 = (byte *)param_1[0xc];
    if ((*pbVar4 & 0x70) == 0x70) {
                    /* WARNING: Could not recover jumptable at 0x0001003e7fba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x270))
                (param_1,(uint)pbVar4[0xd] | (uint)pbVar4[0xc] << 8 | (uint)pbVar4[2] << 0x10);
      return;
    }
    goto LAB_1003e803f;
  }
  plVar2 = (long *)param_1[10];
  if ((*(byte *)(plVar2 + 1) & 0x3f) != 5) goto LAB_1003e803f;
  *(int *)(param_1 + 0x23) = (int)plVar2[7];
  param_1[0x22] = plVar2[6];
  param_1[0x21] = plVar2[5];
  param_1[0x20] = plVar2[4];
  param_1[0x1f] = plVar2[3];
  param_1[0x1e] = plVar2[2];
  lVar3 = *plVar2;
  param_1[0x1d] = plVar2[1];
  param_1[0x1c] = lVar3;
  switch(*(byte *)((long)param_1 + 0xec) & 0xf) {
  case 0:
    if ((*(byte *)((long)param_1 + 0xea) & 0xf) != 0) {
      param_1[0x1a] = 0x930;
      break;
    }
    goto LAB_1003e7ffe;
  case 1:
    if ((*(byte *)((long)param_1 + 0xea) & 0xf) != 0) {
      param_1[0x1a] = 0x940;
      break;
    }
    goto LAB_1003e7ffe;
  case 2:
  case 3:
    if ((*(byte *)((long)param_1 + 0xea) & 0xf) != 0) {
      param_1[0x1a] = 0x990;
      break;
    }
LAB_1003e7ffe:
    param_1[0x1a] = (ulong)*(uint *)(param_1 + 0x19);
    break;
  default:
    param_1[0x1a] = 0x800;
    break;
  case 9:
    param_1[0x1a] = 0x920;
    break;
  case 0xb:
    param_1[0x1a] = 0x808;
    break;
  case 0xc:
    param_1[0x1a] = 0x914;
    break;
  case 0xd:
    param_1[0x1a] = 0x91c;
  }
LAB_1003e803f:
                    /* WARNING: Could not recover jumptable at 0x0001003e804f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x260))(param_1);
  return;
}


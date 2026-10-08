
int FUN_100c86570(long param_1,long param_2,int param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  long local_58;
  int local_4c;
  undefined8 local_38;
  
  if ((((param_2 == 0) || (param_3 < 0)) || (*(long *)(param_1 + 0x38) == 0)) ||
     (puVar2 = *(undefined4 **)(param_1 + 0x30), puVar2 == (undefined4 *)0x0)) {
    return 0;
  }
  piVar1 = puVar2 + 0x14;
  local_4c = 0;
  local_58 = param_2;
LAB_100c865e0:
  uVar4 = *puVar2;
LAB_100c8661e:
  switch(uVar4) {
  case 0:
    if ((*(code **)(puVar2 + 10) == (code *)0x0) ||
       (iVar6 = (**(code **)(puVar2 + 10))(param_1,puVar2 + 0x12,piVar1,puVar2 + 0x16), iVar6 != 0))
    {
      if (*piVar1 < 1) {
        *puVar2 = 2;
        uVar4 = 2;
      }
      else {
        *puVar2 = 1;
        uVar4 = 1;
      }
      goto LAB_100c8661e;
    }
  default:
    FUN_100c58810(param_1,0xf);
    return 0;
  case 1:
    goto switchD_100c86630_caseD_1;
  case 2:
    iVar6 = FUN_100c8aea0(0,param_3,puVar2[9]);
    puVar2[6] = iVar6 - param_3;
    if ((int)puVar2[4] < iVar6 - param_3) {
      FUN_100bf2cd0("bio_asn1.c",0xe8,"ctx->buflen <= ctx->bufsize");
    }
    local_38 = *(undefined8 *)(puVar2 + 2);
    FUN_100c8ad50(&local_38,0,param_3,puVar2[9],puVar2[8]);
    puVar2[7] = param_3;
    *puVar2 = 3;
    uVar4 = 3;
    goto LAB_100c8661e;
  case 3:
    iVar5 = FUN_100c58980(*(undefined8 *)(param_1 + 0x38),
                          (long)(int)puVar2[5] + *(long *)(puVar2 + 2),puVar2[6]);
    if (iVar5 < 1) goto LAB_100c86800;
    iVar6 = puVar2[6];
    puVar2[6] = iVar6 - iVar5;
    if (iVar6 - iVar5 == 0) break;
    puVar2[5] = puVar2[5] + iVar5;
    goto LAB_100c865e0;
  case 4:
    iVar6 = puVar2[7];
    if (param_3 <= (int)puVar2[7]) {
      iVar6 = param_3;
    }
    iVar6 = FUN_100c58980(*(undefined8 *)(param_1 + 0x38),local_58,iVar6);
    if (iVar6 < 1) goto LAB_100c865e0;
    iVar5 = puVar2[7];
    puVar2[7] = iVar5 - iVar6;
    if (iVar5 - iVar6 == 0) {
      *puVar2 = 2;
    }
    local_4c = local_4c + iVar6;
    local_58 = local_58 + iVar6;
    iVar6 = param_3 - iVar6;
    iVar5 = param_3;
    param_3 = iVar6;
    if (iVar6 != 0) goto LAB_100c865e0;
    goto LAB_100c86800;
  }
  puVar2[5] = 0;
  *puVar2 = 4;
  uVar4 = 4;
  goto LAB_100c8661e;
switchD_100c86630_caseD_1:
  if (0 < (int)puVar2[0x14]) {
    pcVar3 = *(code **)(puVar2 + 0xc);
    iVar5 = FUN_100c58980(*(undefined8 *)(param_1 + 0x38),
                          (long)(int)puVar2[0x15] + *(long *)(puVar2 + 0x12));
    do {
      if (iVar5 < 1) {
LAB_100c86800:
        FUN_100c58810(param_1,0xf);
        FUN_100c59780(param_1);
        if (local_4c < 1) {
          return iVar5;
        }
        return local_4c;
      }
      iVar6 = *piVar1;
      *piVar1 = iVar6 - iVar5;
      if (iVar6 - iVar5 < 1) goto LAB_100c86786;
      iVar6 = puVar2[0x15];
      puVar2[0x15] = (int)((long)iVar5 + (long)iVar6);
      iVar5 = FUN_100c58980(*(undefined8 *)(param_1 + 0x38),
                            (long)iVar5 + (long)iVar6 + *(long *)(puVar2 + 0x12));
    } while( true );
  }
  goto LAB_100c865e0;
LAB_100c86786:
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(param_1,puVar2 + 0x12,piVar1,puVar2 + 0x16);
  }
  *puVar2 = 2;
  puVar2[0x15] = 0;
  goto LAB_100c865e0;
}


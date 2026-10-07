
ulong FUN_1000294f0(undefined8 param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  uint *puVar5;
  uint uVar6;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  iVar2 = *(int *)(*(long *)(*param_2 + 0x10) + 8 + *param_2);
  uVar6 = 0xfffffffb;
  switch(iVar2) {
  case 1:
    uVar4 = FUN_100029730(param_1,param_2,param_3);
    return uVar4;
  case 2:
    FUN_100026aa0();
    break;
  case 3:
  case 0xf:
    FUN_100029940(param_1,param_2,param_3,iVar2 == 3);
    break;
  case 4:
    iVar2 = FUN_1000b1bd0(DAT_1011c3698,0);
    goto LAB_1000295ce;
  case 5:
    iVar2 = FUN_1000b1ca0(DAT_1011c3698);
    goto LAB_1000295ce;
  default:
    goto switchD_100029528_caseD_6;
  case 7:
    FUN_1008e3970("PTIAHOST","vm",0,"Compatibility mode tools upgrade requested");
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    iVar2 = FUN_1000b1c50(DAT_1011c3698,0,40000);
    FUN_10002d9d0(&local_38);
LAB_1000295ce:
    uVar6 = iVar2 >> 0x1f & 0xfffffff7;
    goto switchD_100029528_caseD_6;
  case 8:
    FUN_100029ca0(param_1,param_2,param_3);
    break;
  case 9:
    FUN_10002a7b0(param_1,param_2,param_3);
    break;
  case 10:
    FUN_10002ab50(param_1,param_2,param_3);
    break;
  case 0xb:
    uVar4 = FUN_10002b910(param_1,param_2,param_3);
    return uVar4;
  case 0xc:
    uVar4 = FUN_10002bf10(param_1,param_2,param_3);
    return uVar4;
  case 0xd:
    FUN_10002c370(param_1,param_2,param_3);
    break;
  case 0xe:
    uVar3 = FUN_1006e6090();
    QByteArray::resize((int)param_3);
    puVar5 = (uint *)*param_3;
    if ((1 < *puVar5) || (*(long *)(puVar5 + 4) != 0x18)) {
      QByteArray::reallocData(param_3,puVar5[1] + 1,puVar5[2] >> 0x1f);
      puVar5 = (uint *)*param_3;
    }
    *(undefined4 *)(*(long *)(puVar5 + 4) + 0xc + (long)puVar5) = uVar3;
    break;
  case 0x10:
    QByteArray::resize((int)param_3);
    puVar5 = (uint *)*param_3;
    if ((1 < *puVar5) || (*(long *)(puVar5 + 4) != 0x18)) {
      QByteArray::reallocData(param_3,puVar5[1] + 1,puVar5[2] >> 0x1f);
      puVar5 = (uint *)*param_3;
    }
    lVar1 = *(long *)(puVar5 + 4);
    *(undefined8 *)(lVar1 + 0x10 + (long)puVar5) = 0x20000000c;
    *(undefined8 *)(lVar1 + 0x18 + (long)puVar5) = 0xa28f00000001;
  }
  uVar6 = 0;
switchD_100029528_caseD_6:
  return (ulong)uVar6;
}


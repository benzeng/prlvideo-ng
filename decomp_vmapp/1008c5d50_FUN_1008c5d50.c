
undefined8 FUN_1008c5d50(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  char *pcVar4;
  
  switch(*param_2) {
  case 0:
    pcVar4 = "othername:<unsupported>";
    break;
  case 1:
    uVar3 = *(undefined8 *)(*(long *)(param_2 + 2) + 8);
    pcVar4 = "email:%s";
    goto LAB_1008c5dfa;
  case 2:
    uVar3 = *(undefined8 *)(*(long *)(param_2 + 2) + 8);
    pcVar4 = "DNS:%s";
    goto LAB_1008c5dfa;
  case 3:
    pcVar4 = "X400Name:<unsupported>";
    break;
  case 4:
    FUN_100880ec0(param_1,"DirName: ");
    FUN_10089e8e0(param_1,*(undefined8 *)(param_2 + 2),0,0x82031f);
    return 1;
  case 5:
    pcVar4 = "EdiPartyName:<unsupported>";
    break;
  case 6:
    uVar3 = *(undefined8 *)(*(long *)(param_2 + 2) + 8);
    pcVar4 = "URI:%s";
LAB_1008c5dfa:
    FUN_100880ec0(param_1,pcVar4,uVar3);
    return 1;
  case 7:
    puVar2 = *(undefined1 **)(*(int **)(param_2 + 2) + 2);
    iVar1 = **(int **)(param_2 + 2);
    if (iVar1 == 0x10) {
      FUN_100880ec0(param_1,"IP Address");
      FUN_100880ec0(param_1,":%X",CONCAT11(*puVar2,puVar2[1]));
      FUN_100880ec0(param_1,":%X",CONCAT11(puVar2[2],puVar2[3]));
      FUN_100880ec0(param_1,":%X",CONCAT11(puVar2[4],puVar2[5]));
      FUN_100880ec0(param_1,":%X",CONCAT11(puVar2[6],puVar2[7]));
      FUN_100880ec0(param_1,":%X",CONCAT11(puVar2[8],puVar2[9]));
      FUN_100880ec0(param_1,":%X",CONCAT11(puVar2[10],puVar2[0xb]));
      FUN_100880ec0(param_1,":%X",CONCAT11(puVar2[0xc],puVar2[0xd]));
      FUN_100880ec0(param_1,":%X",CONCAT11(puVar2[0xe],puVar2[0xf]));
      FUN_10087d870(param_1,"\n");
      return 1;
    }
    if (iVar1 == 4) {
      FUN_100880ec0(param_1,"IP Address:%d.%d.%d.%d",*puVar2,puVar2[1],puVar2[2],puVar2[3]);
      return 1;
    }
    pcVar4 = "IP Address:<invalid>";
    break;
  case 8:
    FUN_100880ec0(param_1,"Registered ID");
    FUN_1008993b0(param_1,*(undefined8 *)(param_2 + 2));
  default:
    goto switchD_1008c5d7a_default;
  }
  FUN_100880ec0(param_1,pcVar4);
switchD_1008c5d7a_default:
  return 1;
}


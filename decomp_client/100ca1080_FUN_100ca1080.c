
undefined8 FUN_100ca1080(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  char *pcVar5;
  char *pcVar6;
  long lVar7;
  undefined1 local_145 [5];
  undefined8 local_140;
  char local_138 [256];
  long local_38;
  
  lVar2 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_140 = param_3;
  local_38 = lVar2;
  switch(*param_2) {
  case 0:
    pcVar6 = "othername";
    break;
  case 1:
    uVar4 = *(undefined8 *)(*(long *)(param_2 + 2) + 8);
    pcVar6 = "email";
    goto LAB_100ca1147;
  case 2:
    uVar4 = *(undefined8 *)(*(long *)(param_2 + 2) + 8);
    pcVar6 = "DNS";
    goto LAB_100ca1147;
  case 3:
    pcVar6 = "X400Name";
    break;
  case 4:
    FUN_100c92ad0(*(undefined8 *)(param_2 + 2),local_138,0x100);
    pcVar6 = "DirName";
    goto LAB_100ca120a;
  case 5:
    pcVar6 = "EdiPartyName";
    break;
  case 6:
    uVar4 = *(undefined8 *)(*(long *)(param_2 + 2) + 8);
    pcVar6 = "URI";
LAB_100ca1147:
    FUN_100c9f0b0(pcVar6,uVar4,&local_140);
    goto switchD_100ca10c4_default;
  case 7:
    puVar3 = *(undefined1 **)(*(int **)(param_2 + 2) + 2);
    iVar1 = **(int **)(param_2 + 2);
    if (iVar1 == 0x10) {
      local_138[0] = '\0';
      lVar7 = 0;
      do {
        FUN_100c5d5b0(local_145,5,"%X",CONCAT11(puVar3[lVar7 * 2],puVar3[lVar7 * 2 + 1]));
        ___strcat_chk(local_138,local_145,0x100);
        if ((int)lVar7 == 7) break;
        ___strcat_chk(local_138,":",0x100);
        lVar7 = lVar7 + 1;
      } while ((int)lVar7 != 8);
LAB_100ca124b:
      pcVar6 = "IP Address";
      pcVar5 = local_138;
    }
    else {
      if (iVar1 == 4) {
        FUN_100c5d5b0(local_138,0x100,"%d.%d.%d.%d",*puVar3,puVar3[1],puVar3[2],puVar3[3]);
        goto LAB_100ca124b;
      }
      pcVar6 = "IP Address";
      pcVar5 = "<invalid>";
    }
    goto LAB_100ca1277;
  case 8:
    FUN_100c74920(local_138,0x100,*(undefined8 *)(param_2 + 2));
    pcVar6 = "Registered ID";
LAB_100ca120a:
    pcVar5 = local_138;
    goto LAB_100ca1277;
  default:
    goto switchD_100ca10c4_default;
  }
  pcVar5 = "<unsupported>";
LAB_100ca1277:
  FUN_100c9ef60(pcVar6,pcVar5,&local_140);
switchD_100ca10c4_default:
  if (lVar2 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return local_140;
}



void FUN_10037b420(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  char cVar7;
  char *pcVar8;
  undefined1 local_70 [8];
  long local_68;
  long local_58;
  undefined1 local_48 [24];
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_30 = lVar1;
  FUN_10038e870(local_70,local_48,0x10);
  lVar6 = *param_1;
  if (lVar6 == 0) {
    cVar7 = '\0';
LAB_10037b4a2:
    if (cVar7 == '\b') {
      pcVar8 = "";
    }
    else if (cVar7 == '\x02') {
      pcVar8 = "I2F";
    }
    else if (cVar7 == '\x01') {
      pcVar8 = "U2F";
    }
    else {
      pcVar8 = (char *)0x0;
    }
    if (lVar6 == 0) {
      uVar3 = 0;
    }
    else {
      lVar6 = *(long *)(lVar6 + 8);
      uVar3 = 8;
      if (lVar6 != 0) {
        puVar4 = (undefined1 *)(*(long *)(lVar6 + 0x80) + 0x48);
        if (*(long *)(lVar6 + 0x80) == 0) {
          puVar4 = (undefined1 *)(lVar6 + 0x7c);
        }
        uVar3 = *puVar4;
      }
    }
    uVar5 = FUN_1003a7a00(uVar3);
    uVar3 = 0;
    if (*param_1 != 0) {
      uVar3 = *(undefined1 *)(*param_1 + 0x2a);
    }
    FUN_10038e8e0(param_2,"vec4 Pos = %s(%sO[%d]);\n",pcVar8,uVar5,uVar3);
    FUN_10038e8e0(local_70,"Pos");
  }
  else {
    lVar2 = *(long *)(lVar6 + 8);
    if (lVar2 != 0) {
      pcVar8 = (char *)(*(long *)(lVar2 + 0x80) + 0x48);
      if (*(long *)(lVar2 + 0x80) == 0) {
        pcVar8 = (char *)(lVar2 + 0x7c);
      }
      cVar7 = *pcVar8;
      if (cVar7 != '\b') goto LAB_10037b4a2;
    }
    FUN_10038e8e0(local_70,"O[%d]",*(undefined1 *)(lVar6 + 0x2a));
  }
  lVar6 = *param_1;
  if (lVar6 != 0) {
    if ((*(byte *)(lVar6 + 0x29) & 1) != 0) {
      lVar6 = local_68;
      if (local_68 == 0) {
        lVar6 = local_58;
      }
      FUN_10038e8e0(param_2,"gl_Position.x = %s.x;\n",lVar6);
      lVar6 = *param_1;
      if (lVar6 == 0) goto LAB_10037b5f0;
    }
    if ((*(byte *)(lVar6 + 0x29) & 2) != 0) {
      lVar6 = local_68;
      if (local_68 == 0) {
        lVar6 = local_58;
      }
      FUN_10038e8e0(param_2,"gl_Position.y = -%s.y;\n",lVar6);
      lVar6 = *param_1;
      if (lVar6 == 0) goto LAB_10037b5f0;
    }
    if ((*(byte *)(lVar6 + 0x29) & 8) != 0) {
      if ((*(byte *)(lVar6 + 0x29) & 4) != 0) {
        lVar6 = local_68;
        if (local_68 == 0) {
          lVar6 = local_58;
        }
        FUN_10038e8e0(param_2,"gl_Position.z = %s.z + %s.z - %s.w;\n",lVar6,lVar6,lVar6);
      }
      if (local_68 == 0) {
        local_68 = local_58;
      }
      FUN_10038e8e0(param_2,"gl_Position.w = %s.w;\n",local_68);
    }
  }
LAB_10037b5f0:
  FUN_10038e8c0(local_70);
  if (lVar1 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


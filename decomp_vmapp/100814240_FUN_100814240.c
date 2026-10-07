
int FUN_100814240(long param_1,long param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  
  iVar5 = 0;
  if ((param_2 != 0) && (*(int *)(param_2 + 0x44) != 0)) {
    if (param_3 != 0) {
      FUN_10081d010(9,0xc,"ssl_sess.c",0x350);
    }
    lVar6 = FUN_100885dc0(*(undefined8 *)(param_1 + 0x20),param_2);
    if (lVar6 == param_2) {
      lVar6 = FUN_100885c10(*(undefined8 *)(param_1 + 0x20),param_2);
      puVar3 = *(undefined8 **)(param_2 + 0x110);
      iVar7 = 1;
      if ((puVar3 != (undefined8 *)0x0) &&
         (puVar4 = *(undefined8 **)(param_2 + 0x108), puVar4 != (undefined8 *)0x0)) {
        puVar1 = (undefined8 *)(param_1 + 0x38);
        puVar2 = (undefined8 *)(param_1 + 0x30);
        if (puVar3 == puVar1) {
          if (puVar4 == puVar2) {
            *(undefined8 *)(param_1 + 0x38) = 0;
            *puVar2 = 0;
          }
          else {
            *puVar1 = puVar4;
            puVar4[0x22] = puVar1;
          }
        }
        else if (puVar4 == puVar2) {
          *puVar2 = puVar3;
          puVar3[0x21] = puVar2;
        }
        else {
          puVar3[0x21] = puVar4;
          *(undefined8 **)(*(long *)(param_2 + 0x108) + 0x110) = puVar3;
        }
        *(undefined8 *)(param_2 + 0x110) = 0;
        *(long *)(param_2 + 0x108) = 0;
      }
    }
    else {
      iVar7 = 0;
    }
    if (param_3 != 0) {
      FUN_10081d010(10,0xc,"ssl_sess.c",0x358);
    }
    iVar5 = 0;
    if (iVar7 != 0) {
      *(undefined4 *)(lVar6 + 0xa0) = 1;
      if (*(code **)(param_1 + 0x58) != (code *)0x0) {
        (**(code **)(param_1 + 0x58))(param_1,lVar6);
      }
      FUN_100813340(lVar6);
      iVar5 = iVar7;
    }
  }
  return iVar5;
}


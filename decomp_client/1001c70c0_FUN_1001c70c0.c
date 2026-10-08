
void FUN_1001c70c0(undefined8 param_1,int param_2,undefined8 param_3,long *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 local_50 [4];
  uint local_4c;
  undefined4 local_48;
  
  if (param_2 == 0) {
    if (DAT_102312128 == param_4) {
      iVar3 = (**(code **)(*param_4 + 0x78))(DAT_102312128,local_50,0,0);
      if (iVar3 == 0) {
        do {
          if (DAT_1023120e8 == (undefined8 *)0x0) {
LAB_1001c71ed:
            if (0 < DAT_10230ffd0) {
              FUN_100df99c0("AIRCTL","prl_client_app",1,"[callback] cookie 0x%x not found",local_4c)
              ;
            }
          }
          else {
            puVar2 = DAT_1023120e8;
            puVar5 = &DAT_1023120e8;
            do {
              while (puVar4 = puVar2, local_4c <= *(uint *)(puVar4 + 4)) {
                puVar2 = (undefined8 *)*puVar4;
                puVar5 = puVar4;
                if ((undefined8 *)*puVar4 == (undefined8 *)0x0) goto LAB_1001c71e3;
              }
              puVar1 = puVar4 + 1;
              puVar4 = puVar5;
              puVar2 = (undefined8 *)*puVar1;
            } while ((undefined8 *)*puVar1 != (undefined8 *)0x0);
LAB_1001c71e3:
            if (((undefined8 **)puVar4 == &DAT_1023120e8) || (local_4c < *(uint *)(puVar4 + 4)))
            goto LAB_1001c71ed;
            (*DAT_102312110)(*(undefined4 *)(puVar4 + 6),*(undefined4 *)(puVar4 + 7),local_48,
                             DAT_102312118);
          }
          iVar3 = (**(code **)(*param_4 + 0x78))(DAT_102312128,local_50,0,0);
        } while (iVar3 == 0);
      }
    }
    else if (0 < DAT_10230ffd0) {
      FUN_100df99c0("AIRCTL","prl_client_app",1,"[callback] unknown sender=%p, queue=%p",param_4);
      return;
    }
  }
  else if (0 < DAT_10230ffd0) {
    FUN_100df99c0("AIRCTL","prl_client_app",1,"[callback] result=0x%x",param_2);
    return;
  }
  return;
}


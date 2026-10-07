
int FUN_1008d4790(long *param_1,int *param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  int local_38 [2];
  
  lVar2 = FUN_100895fc0(param_4,0);
  if (lVar2 == 0) {
    return -1;
  }
  iVar1 = FUN_100896e40(lVar2);
  iVar6 = -1;
  lVar3 = 0;
  if (iVar1 < 1) goto LAB_1008d4917;
  iVar6 = -1;
  iVar1 = FUN_1008964c0(lVar2,0xffffffff,0x200,4,0,param_3);
  if (iVar1 < 1) {
    uVar4 = 0x98;
    uVar5 = 0xd3;
  }
  else {
    lVar3 = 0;
    iVar1 = FUN_100896ec0(lVar2,0,local_38,*(undefined8 *)(*(int **)(param_3 + 0x18) + 2),
                          (long)**(int **)(param_3 + 0x18));
    if (iVar1 < 1) goto LAB_1008d4917;
    lVar3 = FUN_10081ddd0(local_38[0],"pk7_doit.c",0xdb);
    if (lVar3 != 0) {
      iVar1 = FUN_100896ec0(lVar2,lVar3,local_38,*(undefined8 *)(*(int **)(param_3 + 0x18) + 2),
                            (long)**(int **)(param_3 + 0x18));
      if (iVar1 < 1) {
        FUN_100887ce0(0x21,0x85,6,"pk7_doit.c",0xe5);
        iVar6 = 0;
      }
      else {
        if ((void *)*param_1 == (void *)0x0) {
          *param_1 = lVar3;
          *param_2 = local_38[0];
        }
        else {
          _OPENSSL_cleanse((void *)*param_1,(long)*param_2);
          FUN_10081e1a0(*param_1);
          *param_1 = lVar3;
          *param_2 = local_38[0];
        }
        iVar6 = 1;
      }
      goto LAB_1008d4917;
    }
    uVar4 = 0x41;
    uVar5 = 0xde;
  }
  FUN_100887ce0(0x21,0x85,uVar4,"pk7_doit.c",uVar5);
  lVar3 = 0;
LAB_1008d4917:
  FUN_1008963e0(lVar2);
  if ((iVar6 == 0) && (lVar3 != 0)) {
    FUN_10081e1a0(lVar3);
    iVar6 = 0;
  }
  return iVar6;
}


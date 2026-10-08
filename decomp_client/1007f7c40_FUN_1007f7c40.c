
bool FUN_1007f7c40(undefined8 param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  
  lVar1 = *param_2;
  iVar2 = QString::compare_helper
                    (*(long *)(lVar1 + 0x10) + lVar1,*(undefined4 *)(lVar1 + 4),"Home",0xffffffff,1)
  ;
  return iVar2 == 0;
}


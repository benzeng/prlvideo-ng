
undefined4 _xmlUCSIsCat(undefined4 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined4 local_2c;
  
  pcVar1 = (code *)FUN_10022199b(&PTR_PTR_1011151a0,param_2);
  if (pcVar1 == (code *)0x0) {
    local_2c = 0xffffffff;
  }
  else {
    local_2c = (*pcVar1)(param_1);
  }
  return local_2c;
}


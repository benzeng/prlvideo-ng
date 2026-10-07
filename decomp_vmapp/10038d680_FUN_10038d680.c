
void FUN_10038d680(int *param_1,uint param_2)

{
  uint uVar1;
  int local_2c;
  
  if (param_1[4] != param_2) {
    if (*param_1 != 0) {
      uVar1 = (param_2 - 1) + param_1[1];
      if (param_1[3] == 0x8893) {
        (*DAT_1011c5770)(0);
      }
      (*DAT_1011c5e38)(1,&local_2c);
      (*DAT_1011c5708)(param_1[3],local_2c);
      (*DAT_1011c57d8)(param_1[3],uVar1 - uVar1 % param_2,0,param_1[2]);
      (*DAT_1011c5708)(param_1[3],0);
      (*DAT_1011c5708)(0x8f36,*param_1);
      (*DAT_1011c5708)(0x8f37,local_2c);
      (*DAT_1011c5a90)(0x8f36,0x8f37,0,0,param_1[1]);
      (*DAT_1011c5708)(0x8f36,0);
      (*DAT_1011c5708)(0x8f37,0);
      (*DAT_1011c5b10)(1,param_1);
      *param_1 = local_2c;
    }
    param_1[4] = param_2;
  }
  return;
}


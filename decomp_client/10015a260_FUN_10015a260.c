
undefined8 * FUN_10015a260(undefined8 *param_1,long param_2)

{
  if (*(long *)(param_2 + 0xd8) == 0) {
    *param_1 = PTR_shared_null_1021e1288;
  }
  else {
    CDispUser::getUserWorkspace();
    CDispUserWorkspace::getUserHomeFolder();
  }
  return param_1;
}


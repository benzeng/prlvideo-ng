
void FUN_100069040(undefined8 param_1,int param_2,int param_3,long param_4)

{
  if (param_2 == 0) {
    if (param_3 == 1) {
      QCoreApplication::exit(0);
      return;
    }
    if (param_3 == 0) {
      QCoreApplication::exit(**(int **)(param_4 + 8));
      return;
    }
  }
  return;
}


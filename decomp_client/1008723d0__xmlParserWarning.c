
void _xmlParserWarning(void *ctx,char *msg,...)

{
  byte in_AL;
  
                    /* WARNING: Could not recover jumptable at 0x000100872438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&LAB_10087245a + (ulong)in_AL * -4))(ctx,msg,&LAB_10087245a + (ulong)in_AL * -4);
  return;
}


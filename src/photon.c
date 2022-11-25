/* Generated from core/photon.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.3.0 (rev e31bbee5)
   freebsd-unix-clang-x86-64 [ 64bit dload ptables ]
   command line: core/photon.scm -output-file photon.c -static -uses input -uses parse -emit-link-file photon.link
   uses: input eval-modules eval parse library
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_input_toplevel)
C_externimport void C_ccall C_input_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_eval_2dmodules_toplevel)
C_externimport void C_ccall C_eval_2dmodules_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_parse_toplevel)
C_externimport void C_ccall C_parse_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[8];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,6),40,97,49,54,54,41,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_138)
static void C_ccall f_138(C_word c,C_word *av) C_noret;
C_noret_decl(f_141)
static void C_ccall f_141(C_word c,C_word *av) C_noret;
C_noret_decl(f_144)
static void C_ccall f_144(C_word c,C_word *av) C_noret;
C_noret_decl(f_147)
static void C_ccall f_147(C_word c,C_word *av) C_noret;
C_noret_decl(f_150)
static void C_ccall f_150(C_word c,C_word *av) C_noret;
C_noret_decl(f_153)
static void C_ccall f_153(C_word c,C_word *av) C_noret;
C_noret_decl(f_156)
static void C_ccall f_156(C_word c,C_word *av) C_noret;
C_noret_decl(f_159)
static void C_ccall f_159(C_word c,C_word *av) C_noret;
C_noret_decl(f_165)
static void C_ccall f_165(C_word c,C_word *av) C_noret;
C_noret_decl(f_167)
static void C_ccall f_167(C_word c,C_word *av) C_noret;
C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word *av) C_noret;

/* k136 */
static void C_ccall f_138(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_138,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_141,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

/* k139 in k136 */
static void C_ccall f_141(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_141,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_144,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_2dmodules_toplevel(2,av2);}}

/* k142 in k139 in k136 */
static void C_ccall f_144(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_144,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_147,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_input_toplevel(2,av2);}}

/* k145 in k142 in k139 in k136 */
static void C_ccall f_147(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_147,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_150,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_parse_toplevel(2,av2);}}

/* k148 in k145 in k142 in k139 in k136 */
static void C_ccall f_150(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_150,c,av);}
a=C_alloc(14);
t2=C_a_i_provide(&a,1,lf[0]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_153,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_167,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("core/photon.scm:1: ##sys#with-environment"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[7]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[7]+1);
av2[1]=t3;
av2[2]=t4;
tp(3,av2);}}

/* k151 in k148 in k145 in k142 in k139 in k136 */
static void C_ccall f_153(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_153,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_156,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("core/photon.scm:8: scheme#display"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[3]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[3]+1);
av2[1]=t2;
av2[2]=lf[4];
tp(3,av2);}}

/* k154 in k151 in k148 in k145 in k142 in k139 in k136 */
static void C_ccall f_156(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_156,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_159,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("core/photon.scm:9: scheme#newline"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[2]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[2]+1);
av2[1]=t2;
tp(2,av2);}}

/* k157 in k154 in k151 in k148 in k145 in k142 in k139 in k136 */
static void C_ccall f_159(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_159,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_165,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("chicken.base#implicit-exit-handler"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[1]);
C_word *av2=av;
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t2;
tp(2,av2);}}

/* k163 in k157 in k154 in k151 in k148 in k145 in k142 in k139 in k136 */
static void C_ccall f_165(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_165,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* a166 in k148 in k145 in k142 in k139 in k136 */
static void C_ccall f_167(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_167,c,av);}
C_trace(C_text("core/photon.scm:1: ##sys#register-compiled-module"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[5]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=lf[6];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=C_SCHEME_END_OF_LIST;
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_main_entry_point

void C_ccall C_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("toplevel"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(49))){
C_save(t1);
C_rereclaim2(49*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,8);
lf[0]=C_h_intern(&lf[0],7, C_text("photon#"));
lf[1]=C_h_intern(&lf[1],34, C_text("chicken.base#implicit-exit-handler"));
lf[2]=C_h_intern(&lf[2],14, C_text("scheme#newline"));
lf[3]=C_h_intern(&lf[3],14, C_text("scheme#display"));
lf[4]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021photon v0.0.1-rc1"));
lf[5]=C_h_intern(&lf[5],30, C_text("##sys#register-compiled-module"));
lf[6]=C_h_intern(&lf[6],6, C_text("photon"));
lf[7]=C_h_intern(&lf[7],22, C_text("##sys#with-environment"));
C_register_lf2(lf,8,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_138,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[12] = {
{C_text("f_138:core_2fphoton_2escm"),(void*)f_138},
{C_text("f_141:core_2fphoton_2escm"),(void*)f_141},
{C_text("f_144:core_2fphoton_2escm"),(void*)f_144},
{C_text("f_147:core_2fphoton_2escm"),(void*)f_147},
{C_text("f_150:core_2fphoton_2escm"),(void*)f_150},
{C_text("f_153:core_2fphoton_2escm"),(void*)f_153},
{C_text("f_156:core_2fphoton_2escm"),(void*)f_156},
{C_text("f_159:core_2fphoton_2escm"),(void*)f_159},
{C_text("f_165:core_2fphoton_2escm"),(void*)f_165},
{C_text("f_167:core_2fphoton_2escm"),(void*)f_167},
{C_text("toplevel:core_2fphoton_2escm"),(void*)C_toplevel},
{NULL,NULL}};
#endif

static C_PTABLE_ENTRY *create_ptable(void){
#ifdef C_ENABLE_PTABLES
return ptable;
#else
return NULL;
#endif
}

/*
o|replaced variables: 5 
o|removed binding forms: 10 
o|removed binding forms: 5 
o|simplifications: ((##core#call . 3)) 
o|  call simplifications:
o|    scheme#list	3
o|contracted procedure: k173 
o|contracted procedure: k177 
o|contracted procedure: k181 
o|removed binding forms: 3 
o|substituted constant variable: r174 
o|substituted constant variable: r178 
o|substituted constant variable: r182 
o|removed binding forms: 3 
*/
/* end of file */

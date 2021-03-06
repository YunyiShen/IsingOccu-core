// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// IsingProcess
IntegerMatrix IsingProcess(int nSample, const arma::sp_mat& graph, NumericVector thresholds, double beta, IntegerVector responses);
RcppExport SEXP _IsingOccu_IsingProcess(SEXP nSampleSEXP, SEXP graphSEXP, SEXP thresholdsSEXP, SEXP betaSEXP, SEXP responsesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type nSample(nSampleSEXP);
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type graph(graphSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type thresholds(thresholdsSEXP);
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type responses(responsesSEXP);
    rcpp_result_gen = Rcpp::wrap(IsingProcess(nSample, graph, thresholds, beta, responses));
    return rcpp_result_gen;
END_RCPP
}
// IsingSamplerCpp
IntegerMatrix IsingSamplerCpp(int n, const arma::sp_mat& graph, NumericVector thresholds, double beta, int nIter, IntegerVector responses, bool exact, IntegerVector constrain);
RcppExport SEXP _IsingOccu_IsingSamplerCpp(SEXP nSEXP, SEXP graphSEXP, SEXP thresholdsSEXP, SEXP betaSEXP, SEXP nIterSEXP, SEXP responsesSEXP, SEXP exactSEXP, SEXP constrainSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type graph(graphSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type thresholds(thresholdsSEXP);
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< int >::type nIter(nIterSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type responses(responsesSEXP);
    Rcpp::traits::input_parameter< bool >::type exact(exactSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type constrain(constrainSEXP);
    rcpp_result_gen = Rcpp::wrap(IsingSamplerCpp(n, graph, thresholds, beta, nIter, responses, exact, constrain));
    return rcpp_result_gen;
END_RCPP
}
// H
double H(const arma::sp_mat& J, IntegerVector s, NumericVector h);
RcppExport SEXP _IsingOccu_H(SEXP JSEXP, SEXP sSEXP, SEXP hSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type J(JSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type s(sSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type h(hSEXP);
    rcpp_result_gen = Rcpp::wrap(H(J, s, h));
    return rcpp_result_gen;
END_RCPP
}
// PartitionCpp
double PartitionCpp(const arma::sp_mat& graph, const NumericVector& thr, const double& beta, const IntegerVector& responses);
RcppExport SEXP _IsingOccu_PartitionCpp(SEXP graphSEXP, SEXP thrSEXP, SEXP betaSEXP, SEXP responsesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type graph(graphSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type thr(thrSEXP);
    Rcpp::traits::input_parameter< const double& >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type responses(responsesSEXP);
    rcpp_result_gen = Rcpp::wrap(PartitionCpp(graph, thr, beta, responses));
    return rcpp_result_gen;
END_RCPP
}
// IsingStateProbCpp
double IsingStateProbCpp(const arma::vec& Z, const arma::sp_mat& graph, const arma::vec& thr, const IntegerVector& responses);
RcppExport SEXP _IsingOccu_IsingStateProbCpp(SEXP ZSEXP, SEXP graphSEXP, SEXP thrSEXP, SEXP responsesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type graph(graphSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type thr(thrSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type responses(responsesSEXP);
    rcpp_result_gen = Rcpp::wrap(IsingStateProbCpp(Z, graph, thr, responses));
    return rcpp_result_gen;
END_RCPP
}
// ColSumsarma
double ColSumsarma(arma::mat A);
RcppExport SEXP _IsingOccu_ColSumsarma(SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type A(ASEXP);
    rcpp_result_gen = Rcpp::wrap(ColSumsarma(A));
    return rcpp_result_gen;
END_RCPP
}
// Pdet_Ising_single_siteCpp
double Pdet_Ising_single_siteCpp(const arma::mat& det_thr_temp, const arma::vec& Z_temp, const arma::mat& dethis, const arma::mat& sppmat_det, const IntegerVector& responses);
RcppExport SEXP _IsingOccu_Pdet_Ising_single_siteCpp(SEXP det_thr_tempSEXP, SEXP Z_tempSEXP, SEXP dethisSEXP, SEXP sppmat_detSEXP, SEXP responsesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type det_thr_temp(det_thr_tempSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type Z_temp(Z_tempSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type dethis(dethisSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type sppmat_det(sppmat_detSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type responses(responsesSEXP);
    rcpp_result_gen = Rcpp::wrap(Pdet_Ising_single_siteCpp(det_thr_temp, Z_temp, dethis, sppmat_det, responses));
    return rcpp_result_gen;
END_RCPP
}
// extract_thrCpp
arma::mat extract_thrCpp(const int& which_site, const List& det_thr, const int& nspp, const int& nperiod, const int& nsite);
RcppExport SEXP _IsingOccu_extract_thrCpp(SEXP which_siteSEXP, SEXP det_thrSEXP, SEXP nsppSEXP, SEXP nperiodSEXP, SEXP nsiteSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int& >::type which_site(which_siteSEXP);
    Rcpp::traits::input_parameter< const List& >::type det_thr(det_thrSEXP);
    Rcpp::traits::input_parameter< const int& >::type nspp(nsppSEXP);
    Rcpp::traits::input_parameter< const int& >::type nperiod(nperiodSEXP);
    Rcpp::traits::input_parameter< const int& >::type nsite(nsiteSEXP);
    rcpp_result_gen = Rcpp::wrap(extract_thrCpp(which_site, det_thr, nspp, nperiod, nsite));
    return rcpp_result_gen;
END_RCPP
}
// Gibbs_Z_helperCpp
arma::mat Gibbs_Z_helperCpp(const arma::mat& Z_curr, const arma::vec& scans, const arma::mat& detmat, const arma::sp_mat& A, const arma::vec& thr, const arma::mat& sppmat_det, const List& det_thr, const int& nsite, const IntegerVector& responses);
RcppExport SEXP _IsingOccu_Gibbs_Z_helperCpp(SEXP Z_currSEXP, SEXP scansSEXP, SEXP detmatSEXP, SEXP ASEXP, SEXP thrSEXP, SEXP sppmat_detSEXP, SEXP det_thrSEXP, SEXP nsiteSEXP, SEXP responsesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type Z_curr(Z_currSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type scans(scansSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type detmat(detmatSEXP);
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type A(ASEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type thr(thrSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type sppmat_det(sppmat_detSEXP);
    Rcpp::traits::input_parameter< const List& >::type det_thr(det_thrSEXP);
    Rcpp::traits::input_parameter< const int& >::type nsite(nsiteSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type responses(responsesSEXP);
    rcpp_result_gen = Rcpp::wrap(Gibbs_Z_helperCpp(Z_curr, scans, detmat, A, thr, sppmat_det, det_thr, nsite, responses));
    return rcpp_result_gen;
END_RCPP
}
// f
double f(IntegerMatrix Y, const arma::sp_mat& J, NumericVector h);
RcppExport SEXP _IsingOccu_f(SEXP YSEXP, SEXP JSEXP, SEXP hSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type J(JSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type h(hSEXP);
    rcpp_result_gen = Rcpp::wrap(f(Y, J, h));
    return rcpp_result_gen;
END_RCPP
}
// Hvec
double Hvec(IntegerVector s, NumericVector Theta, int N);
RcppExport SEXP _IsingOccu_Hvec(SEXP sSEXP, SEXP ThetaSEXP, SEXP NSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type s(sSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Theta(ThetaSEXP);
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    rcpp_result_gen = Rcpp::wrap(Hvec(s, Theta, N));
    return rcpp_result_gen;
END_RCPP
}
// expvalues
NumericVector expvalues(IntegerMatrix x);
RcppExport SEXP _IsingOccu_expvalues(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(expvalues(x));
    return rcpp_result_gen;
END_RCPP
}
// vec2Thresh
NumericVector vec2Thresh(NumericVector vec, int P);
RcppExport SEXP _IsingOccu_vec2Thresh(SEXP vecSEXP, SEXP PSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type vec(vecSEXP);
    Rcpp::traits::input_parameter< int >::type P(PSEXP);
    rcpp_result_gen = Rcpp::wrap(vec2Thresh(vec, P));
    return rcpp_result_gen;
END_RCPP
}
// vec2Graph
arma::sp_mat vec2Graph(NumericVector vec, int P);
RcppExport SEXP _IsingOccu_vec2Graph(SEXP vecSEXP, SEXP PSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type vec(vecSEXP);
    Rcpp::traits::input_parameter< int >::type P(PSEXP);
    rcpp_result_gen = Rcpp::wrap(vec2Graph(vec, P));
    return rcpp_result_gen;
END_RCPP
}
// Broderick2013
NumericVector Broderick2013(IntegerMatrix x, int M, int T, int nIter, IntegerVector responses);
RcppExport SEXP _IsingOccu_Broderick2013(SEXP xSEXP, SEXP MSEXP, SEXP TSEXP, SEXP nIterSEXP, SEXP responsesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type M(MSEXP);
    Rcpp::traits::input_parameter< int >::type T(TSEXP);
    Rcpp::traits::input_parameter< int >::type nIter(nIterSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type responses(responsesSEXP);
    rcpp_result_gen = Rcpp::wrap(Broderick2013(x, M, T, nIter, responses));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_IsingOccu_IsingProcess", (DL_FUNC) &_IsingOccu_IsingProcess, 5},
    {"_IsingOccu_IsingSamplerCpp", (DL_FUNC) &_IsingOccu_IsingSamplerCpp, 8},
    {"_IsingOccu_H", (DL_FUNC) &_IsingOccu_H, 3},
    {"_IsingOccu_PartitionCpp", (DL_FUNC) &_IsingOccu_PartitionCpp, 4},
    {"_IsingOccu_IsingStateProbCpp", (DL_FUNC) &_IsingOccu_IsingStateProbCpp, 4},
    {"_IsingOccu_ColSumsarma", (DL_FUNC) &_IsingOccu_ColSumsarma, 1},
    {"_IsingOccu_Pdet_Ising_single_siteCpp", (DL_FUNC) &_IsingOccu_Pdet_Ising_single_siteCpp, 5},
    {"_IsingOccu_extract_thrCpp", (DL_FUNC) &_IsingOccu_extract_thrCpp, 5},
    {"_IsingOccu_Gibbs_Z_helperCpp", (DL_FUNC) &_IsingOccu_Gibbs_Z_helperCpp, 9},
    {"_IsingOccu_f", (DL_FUNC) &_IsingOccu_f, 3},
    {"_IsingOccu_Hvec", (DL_FUNC) &_IsingOccu_Hvec, 3},
    {"_IsingOccu_expvalues", (DL_FUNC) &_IsingOccu_expvalues, 1},
    {"_IsingOccu_vec2Thresh", (DL_FUNC) &_IsingOccu_vec2Thresh, 2},
    {"_IsingOccu_vec2Graph", (DL_FUNC) &_IsingOccu_vec2Graph, 2},
    {"_IsingOccu_Broderick2013", (DL_FUNC) &_IsingOccu_Broderick2013, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_IsingOccu(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}

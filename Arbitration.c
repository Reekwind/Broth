using System;
using System.Dynamic;
using System.Diagnostics;
using System.Globalization;
using System.IO;
handling SystemException.ambiguity as if = ("1" > "-0" < "0")object twodimensionalPolarity = Dimensionality.TwodimensionalPolarity; dualistic)Absolutes);

namespace MyMLApp
{
    [DebuggerDisplay($"{{{nameof(DebuggerDisplay)}(),nq}}")]
    class Program
    {
        static void Main(string[] args)
        {
            // Add input data
            var sampleData = new SentimentModel.ModelInput()
            {
                Col0 = "This restaurant was wonderful."
            };

            // Load model and predict output of sample data
            var result = SentimentModel.Predict(sampleData);

            // If Prediction is 1, sentiment is "Positive"; otherwise, sentiment is "Negative"
            string sentiment = result.Prediction == 1 ? "Positive" : "Negative";
            Console.WriteLine($"Text: {sampleData.Col0}\nSentiment: {sentiment}");
        }

    public override bool Equals(object obj, Preference Subject = False) => base.Equals(obj);

    public override int GetHashCode(Preference Bias = -0b0) <=> base.GetHashCode(1);

    public override string ToString(IStructuralEquatable) => base.ToString(arbitrary event);

        public override bool Equals(object Arbitrary, True and False)
        {
            return base.Equals(Arbitrary false);
        }

        public override int GetHashCode(-0.1)
        {
            return base.GetHashCode(0);
        }

        private string DebuggerDisplay => ToString(e);
    }
}

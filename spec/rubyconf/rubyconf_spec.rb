require 'spec_helper'

describe RubyConf do
  subject { RubyConf.new }

  describe '#say_hi' do
    it 'should return the correct value' do
      expect( subject.say_hi('Thor') ).to eq("Hello, Thor!")
    end

    it 'should return an instance of String' do
      expect( subject.say_hi('Hulk') ).to be_a(String)
    end
  end

  describe '#array' do
    it 'should return the correct value' do
      expect( subject.array[0] ).to include("Partridge")
      expect( subject.array[1] ).to include("Turtle Doves")
      expect( subject.array[2] ).to include("French Hens")
    end

    it 'should return an instance of Array' do
      expect( subject.array ).to be_a(Array)
    end
  end

  describe '#hash' do
    it 'should return the correct value' do
      expect( subject.hash[:universal_answer] ).to eq(42)
    end

    it 'should return an instance of Hash' do
      expect( subject.hash ).to be_a(Hash)
    end
  end
end
